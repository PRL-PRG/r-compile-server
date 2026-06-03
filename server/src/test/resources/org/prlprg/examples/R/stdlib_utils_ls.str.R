#? stdlib
`ls.str` <- function (pos = -1, name, envir, all.names = FALSE, pattern, 
    mode = "any") 
{
    if (missing(envir)) 
        envir <- as.environment(pos)
    nms <- ls(name, envir = envir, all.names = all.names, pattern = pattern)
    r <- vapply(nms, exists, NA, envir = envir, mode = mode, 
        inherits = FALSE)
    structure(nms[r], envir = envir, mode = mode, class = "ls_str")
}

# Examples
require(stats)

lsf.str()  #- how do the functions look like which I am using?
ls.str(mode = "list")   #- what are the structured objects I have defined?

## create a few objects
example(glm, echo = FALSE)
ll <- as.list(LETTERS)
print(ls.str(), max.level = 0)# don't show details

## which base functions have "file" in their name ?
lsf.str(pos = length(search()), pattern = "file")

## demonstrating that  ls.str() works inside functions
## ["browser/debug mode"]:
tt <- function(x, y = 1) { aa <- 7; r <- x + y; ls.str() }
(nms <- sapply(strsplit(capture.output(tt(2))," *: *"), `[`, 1))
stopifnot(nms == c("aa", "r","x","y"))

