#? stdlib
`predict.poly` <- function (object, newdata, ...) 
{
    if (missing(newdata)) 
        object
    else if (is.null(attr(object, "coefs"))) 
        poly(newdata, degree = max(attr(object, "degree")), raw = TRUE, 
            simple = TRUE)
    else poly(newdata, degree = max(attr(object, "degree")), 
        coefs = attr(object, "coefs"), simple = TRUE)
}
