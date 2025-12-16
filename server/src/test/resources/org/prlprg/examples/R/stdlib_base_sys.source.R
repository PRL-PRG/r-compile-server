#? stdlib
`sys.source` <- function (file, envir = baseenv(), chdir = FALSE, keep.source = getOption("keep.source.pkgs"), 
    keep.parse.data = getOption("keep.parse.data.pkgs"), toplevel.env = as.environment(envir)) 
{
    if (!(is.character(file) && file.exists(file))) 
        stop(gettextf("'%s' is not an existing file", file))
    keep.source <- as.logical(keep.source)
    keep.parse.data <- as.logical(keep.parse.data)
    oop <- options(keep.source = keep.source, keep.parse.data = keep.parse.data, 
        topLevelEnvironment = toplevel.env)
    on.exit(options(oop))
    if (keep.source) {
        lines <- readLines(file, warn = FALSE)
        srcfile <- srcfilecopy(file, lines, file.mtime(file), 
            isFile = TRUE)
        exprs <- parse(text = lines, srcfile = srcfile, keep.source = TRUE)
    }
    else exprs <- parse(n = -1, file = file, srcfile = NULL, 
        keep.source = FALSE)
    if (length(exprs) == 0L) 
        return(invisible())
    if (chdir && (path <- dirname(file)) != ".") {
        owd <- getwd()
        if (is.null(owd)) 
            stop("cannot 'chdir' as current directory is unknown")
        on.exit(setwd(owd), add = TRUE)
        setwd(path)
    }
    for (i in seq_along(exprs)) eval(exprs[i], envir)
    invisible()
}

# Examples
## a simple way to put some objects in an environment
## high on the search path
tmp <- tempfile()
writeLines("aaa <- pi", tmp)
env <- attach(NULL, name = "myenv")
sys.source(tmp, env)
unlink(tmp)
search()
aaa
detach("myenv")

