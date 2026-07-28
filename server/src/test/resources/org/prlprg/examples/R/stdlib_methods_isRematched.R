#? stdlib
`isRematched` <- function (definition) 
{
    bdy <- body(definition)
    if (.identC(class(bdy), "{") && length(bdy) > 1L) {
        bdy <- bdy[[2L]]
        .identC(class(bdy), "<-") && identical(bdy[[2L]], as.name(".local"))
    }
    else FALSE
}
