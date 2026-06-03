#? stdlib
`abbreviate` <- function (names.arg, minlength = 4L, use.classes = TRUE, dot = FALSE, 
    strict = FALSE, method = c("left.kept", "both.sides"), named = TRUE) 
{
    if (minlength <= 0L) {
        x <- rep.int("", length(names.arg))
        if (named) 
            names(x) <- names.arg
        return(x)
    }
    names.arg <- sub("^ +", "", sub(" +$", "", as.character(names.arg)))
    dups <- duplicated(names.arg)
    old <- names.arg
    if (any(dups)) 
        names.arg <- names.arg[!dups]
    x <- names.arg
    if (strict) {
        x[] <- .Internal(abbreviate(x, minlength, use.classes))
    }
    else {
        method <- match.arg(method)
        if (method == "both.sides") 
            chRev <- function(x) sapply(lapply(strsplit(x, NULL), 
                rev), paste, collapse = "")
        dup2 <- rep.int(TRUE, length(names.arg))
        these <- names.arg
        repeat {
            ans <- .Internal(abbreviate(these, minlength, use.classes))
            x[dup2] <- ans
            if (!any(dup2 <- duplicated(x))) 
                break
            if (method == "both.sides") {
                x[dup2] <- chRev(.Internal(abbreviate(chRev(names.arg[dup2]), 
                  minlength, use.classes)))
                if (!any(dup2 <- duplicated(x))) 
                  break
            }
            minlength <- minlength + 1
            dup2 <- dup2 | match(x, x[dup2], 0L)
            these <- names.arg[dup2]
        }
    }
    if (any(dups)) 
        x <- x[match(old, names.arg)]
    if (dot) {
        chgd <- x != old
        x[chgd] <- paste0(x[chgd], ".")
    }
    if (named) 
        names(x) <- old
    x
}

# Examples
x <- c("abcd", "efgh", "abce")
abbreviate(x, 2)
abbreviate(x, 2, strict = TRUE) # >> 1st and 3rd are == "ab"

(st.abb <- abbreviate(state.name, 2))
stopifnot(identical(unname(st.abb),
           abbreviate(state.name, 2, named=FALSE)))
table(nchar(st.abb)) # out of 50, 3 need 4 letters :
as <- abbreviate(state.name, 3, strict = TRUE)
as[which(as == "Mss")]
stopifnot(which(as == "Mss") == c(21,24,25))

## and without distinguishing vowels:
st.abb2 <- abbreviate(state.name, 2, FALSE)
cbind(st.abb, st.abb2)[st.abb2 != st.abb, ]

## method = "both.sides" helps:  no 4-letters, and only 4 3-letters:
st.ab2 <- abbreviate(state.name, 2, method = "both")
table(nchar(st.ab2))
## Compare the two methods:
cbind(st.abb, st.ab2)

