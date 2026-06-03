#? stdlib
`make.names` <- function (names, unique = FALSE, allow_ = TRUE) 
{
    names <- as.character(names)
    names2 <- .Internal(make.names(names, allow_))
    if (unique) {
        o <- order(names != names2)
        names2[o] <- make.unique(names2[o])
    }
    names2
}

# Examples
make.names(c("a and b", "a-and-b"), unique = TRUE)
# "a.and.b"  "a.and.b.1"
make.names(c("a and b", "a_and_b"), unique = TRUE)
# "a.and.b"  "a_and_b"
make.names(c("a and b", "a_and_b"), unique = TRUE, allow_ = FALSE)
# "a.and.b"  "a.and.b.1"
make.names(c("", "X"), unique = TRUE)
# "X.1" "X" currently; R up to 3.0.2 gave "X" "X.1"

state.name[make.names(state.name) != state.name] # those 10 with a space

