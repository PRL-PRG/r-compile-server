#? stdlib
`array` <- function (data = NA, dim = length(data), dimnames = NULL) 
{
    if (is.atomic(data) && !is.object(data)) 
        return(.Internal(array(data, dim, dimnames)))
    data <- as.vector(data)
    if (is.object(data)) {
        dim <- as.integer(dim)
        if (!length(dim)) 
            stop("'dim' cannot be of length 0")
        vl <- prod(dim)
        if (length(data) != vl) {
            if (vl > .Machine$integer.max) 
                stop("'dim' specifies too large an array")
            data <- rep_len(data, vl)
        }
        if (length(dim)) 
            dim(data) <- dim
        if (is.list(dimnames) && length(dimnames)) 
            dimnames(data) <- dimnames
        data
    }
    else .Internal(array(data, dim, dimnames))
}

# Examples
dim(as.array(letters))
array(1:3, c(2,4)) # recycle 1:3 "2 2/3 times"
#     [,1] [,2] [,3] [,4]
#[1,]    1    3    2    1
#[2,]    2    1    3    2

