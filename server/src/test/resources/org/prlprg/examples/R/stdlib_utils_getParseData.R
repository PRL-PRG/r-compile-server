#? stdlib
`getParseData` <- function (x, includeText = NA) 
{
    srcfile <- if (inherits(x, "srcfile")) 
        x
    else getSrcfile(x)
    if (is.null(srcfile)) 
        return(NULL)
    data <- srcfile$parseData
    if (is.null(data) && !is.null(srcfile$original)) 
        data <- srcfile$original$parseData
    if (!is.null(data)) {
        tokens <- attr(data, "tokens")
        data <- t(unclass(data))
        colnames(data) <- c("line1", "col1", "line2", "col2", 
            "terminal", "token.num", "id", "parent")
        data <- data.frame(data[, -c(5, 6), drop = FALSE], token = tokens, 
            terminal = as.logical(data[, "terminal"]), text = attr(data, 
                "text"), stringsAsFactors = FALSE)
        o <- order(data[, 1], data[, 2], -data[, 3], -data[, 
            4])
        data <- data[o, ]
        rownames(data) <- data$id
        attr(data, "srcfile") <- srcfile
        gettext <- if (isTRUE(includeText)) 
            which(!nzchar(data$text))
        else if (is.na(includeText)) 
            which(!nzchar(data$text) & data$terminal)
        else {
            data$text <- NULL
            integer(0)
        }
        if (length(gettext)) 
            data$text[gettext] <- getParseText(data, data$id[gettext])
    }
    data
}

# Examples
fn <- function(x) {
  x + 1 # A comment, kept as part of the source
}

d <- getParseData(fn)
if (!is.null(d)) {
  plus <- which(d$token == "'+'")
  sum <- d$parent[plus]
  print(d[as.character(sum),])
  print(getParseText(d, sum))
}

