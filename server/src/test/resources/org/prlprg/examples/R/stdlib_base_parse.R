#? stdlib
`parse` <- function (file = "", n = NULL, text = NULL, prompt = "?", keep.source = getOption("keep.source"), 
    srcfile = NULL, encoding = "unknown") 
{
    keep.source <- isTRUE(keep.source)
    if (!is.null(text)) {
        if (length(text) == 0L) 
            return(expression())
        if (missing(srcfile)) {
            srcfile <- "<text>"
            if (keep.source) 
                srcfile <- srcfilecopy(srcfile, text)
        }
        file <- stdin()
    }
    else {
        if (is.character(file)) {
            if (file == "") {
                file <- stdin()
                if (missing(srcfile)) 
                  srcfile <- "<stdin>"
            }
            else {
                filename <- file
                file <- file(filename, "r")
                if (missing(srcfile)) 
                  srcfile <- filename
                if (keep.source) {
                  text <- readLines(file, warn = FALSE, encoding = encoding)
                  if (!length(text)) 
                    text <- ""
                  close(file)
                  file <- stdin()
                  srcfile <- srcfilecopy(filename, text, file.mtime(filename), 
                    isFile = TRUE)
                }
                else on.exit(close(file))
            }
        }
    }
    .Internal(parse(file, n, text, prompt, srcfile, encoding))
}

# Examples
fil <- tempfile(fileext = ".Rdmped")
cat("x <- c(1, 4)\n  x ^ 3 -10 ; outer(1:7, 5:9)\n", file = fil)
# parse 3 statements from our temp file
parse(file = fil, n = 3)
unlink(fil)

## str2lang(<string>)  || str2expression(<character>) :
stopifnot(exprs = {
  identical( str2lang("x[3] <- 1+4"), quote(x[3] <- 1+4))
  identical( str2lang("log(y)"),      quote(log(y)) )
  identical( str2lang("abc"   ),      quote(abc) -> qa)
  is.symbol(qa) & !is.call(qa)           # a symbol/name, not a call
  identical( str2lang("1.375" ), 1.375)  # just a number, not a call
  identical( str2expression(c("# a comment", "", "42")), expression(42) )
})

# A partial parse with a syntax error
txt <- "
x <- 1
an error
"
sf <- srcfile("txt")
tryCatch(parse(text = txt, srcfile = sf), error = function(e) "Syntax error.")
getParseData(sf)

