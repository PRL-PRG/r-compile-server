#? stdlib
`HTMLheader` <- function (title = "R", logo = TRUE, up = NULL, top = file.path(Rhome, 
    "doc/html/index.html"), Rhome = "", css = file.path(Rhome, 
    "doc/html/R.css"), headerTitle = paste("R:", title), outputEncoding = "UTF-8") 
{
    result <- c("<!DOCTYPE html>", "<html>", paste0("<head><title>", 
        headerTitle, "</title>"), paste0("<meta http-equiv=\"Content-Type\" content=\"text/html; charset=", 
        mime_canonical_encoding(outputEncoding), "\" />"), "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, user-scalable=yes\" />", 
        paste0("<link rel=\"stylesheet\" type=\"text/css\" href=\"", 
            css, "\" />"), "</head><body><div class=\"container\">", 
        paste("<h1>", title))
    if (logo) 
        result <- c(result, paste0("<img class=\"toplogo\" src=\"", 
            file.path(Rhome, "doc/html/Rlogo.svg"), "\" alt=\"[R logo]\" />"))
    result <- c(result, "</h1>", "<hr/>")
    if (!is.null(up) || !is.null(top)) {
        result <- c(result, "<div style=\"text-align: center;\">")
        if (!is.null(up)) 
            result <- c(result, paste0("<a href=\"", up, "\"><img class=\"arrow\" src=\"", 
                file.path(Rhome, "doc/html/left.jpg"), "\" alt=\"[Up]\" /></a>"))
        if (!is.null(top)) 
            result <- c(result, paste0("<a href=\"", top, "\"><img class=\"arrow\" src=\"", 
                file.path(Rhome, "doc/html/up.jpg"), "\" alt=\"[Top]\" /></a>"))
        result <- c(result, "</div>")
    }
    result
}

# Examples
cat(HTMLheader("This is a sample header"), sep="\n")

