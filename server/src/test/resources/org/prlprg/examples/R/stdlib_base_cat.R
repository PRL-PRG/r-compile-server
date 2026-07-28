#? stdlib
`cat` <- function (..., file = "", sep = " ", fill = FALSE, labels = NULL, 
    append = FALSE) 
{
    if (is.character(file)) 
        if (file == "") 
            file <- stdout()
        else if (startsWith(file, "|")) {
            file <- pipe(substring(file, 2L), "w")
            on.exit(close(file))
        }
        else {
            file <- file(file, ifelse(append, "a", "w"))
            on.exit(close(file))
        }
    .Internal(cat(list(...), file, sep, fill, labels, append))
}

# Examples
iter <- stats::rpois(1, lambda = 10)
## print an informative message
cat("iteration = ", iter <- iter + 1, "\n")

## 'fill' and label lines:
cat(paste(letters, 100* 1:26), fill = TRUE, labels = paste0("{", 1:10, "}:"))

