#? stdlib
`glob2rx` <- function (pattern, trim.head = FALSE, trim.tail = TRUE) 
{
    if (!length(pattern)) 
        return(character())
    p <- gsub(".", "\\.", paste0("^", pattern, "$"), fixed = TRUE)
    p <- gsub("?", ".", gsub("*", ".*", p, fixed = TRUE), fixed = TRUE)
    p <- gsub("([^\\])\\(", "\\1\\\\(", p)
    p <- gsub("([^\\])\\[", "\\1\\\\[", p)
    p <- gsub("([^\\])\\{", "\\1\\\\{", p)
    if (trim.tail) 
        p <- sub(".*$", "", p, fixed = TRUE)
    if (trim.head) 
        p <- sub("^.*", "", p, fixed = TRUE)
    p
}

# Examples
stopifnot(glob2rx("abc.*") == "^abc\\.",
          glob2rx("a?b.*") == "^a.b\\.",
          glob2rx("a?b.*", trim.tail = FALSE) == "^a.b\\..*$",
          glob2rx("*.doc") == "^.*\\.doc$",
          glob2rx("*.doc", trim.head = TRUE) == "\\.doc$",
          glob2rx("*.t*")  == "^.*\\.t",
          glob2rx("*.t??") == "^.*\\.t..$",
          glob2rx("*[*")  == "^.*\\["
)

