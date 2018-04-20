var
	gulp = require('gulp'),
	postcss = require('gulp-postcss'),
	merge = require('postcss-merge-rules'),
	duplicate = require('postcss-discard-duplicates'),
    unused = require('postcss-discard-unused'),
    sourcemaps = require('gulp-sourcemaps'),
    autoprefixer = require('autoprefixer'),
    sass = require('gulp-sass'),
    plumber = require('gulp-plumber'),
    sassGlob = require('gulp-sass-glob'),
    fmt = require('stylefmt');

gulp.task('css', function () {

	var
		browserlist = {
			browsers:['last 2 versions', 'ie >= 9', '> 1%']
		},
		processors = [
			// merge,
			// duplicate,
			// unused,
			autoprefixer(browserlist),
			fmt
		];
    gulp.src('sass/global.styles.scss')
    	.pipe(plumber())
        .pipe(sourcemaps.init())
        .pipe(sass().on('error', sass.logError))
        .pipe(postcss(processors))
        .pipe(sourcemaps.write())
        .pipe( gulp.dest('css/') );
});

gulp.task('responsive', function () {
		var
			browserlist = {
				browsers:['last 2 versions', 'ie >= 9', '> 1%']
			},
			processors = [
				autoprefixer(browserlist),
				fmt
			];
			gulp.src('sass/other_sass/responsive.custom.scss')
				.pipe(plumber())
					.pipe(sourcemaps.init())
					.pipe(sass().on('error', sass.logError))
					.pipe(postcss(processors))
					.pipe(sourcemaps.write())
					.pipe( gulp.dest('css/') );
	});

gulp.task('watch', function(){
	gulp.watch('sass/**/*.scss', ['css']);
	gulp.watch('sass/other_sass/responsive.custom.scss', ['responsive']);
});

gulp.task('default', ['css','responsive','watch']);
