#? stdlib
`comment` <- function (x) 
.Internal(comment(x))

# Examples
x <- matrix(1:12, 3, 4)
comment(x) <- c("This is my very important data from experiment #0234",
                "Jun 5, 1998")
x
comment(x)

