#? stdlib
`model.extract` <- function (frame, component) 
{
    component <- as.character(substitute(component))
    rval <- switch(component, response = model.response(frame), 
        offset = model.offset(frame), frame[[paste0("(", component, 
            ")")]])
    if (!is.null(rval)) {
        if (length(rval) == nrow(frame)) 
            names(rval) <- attr(frame, "row.names")
        else if (is.matrix(rval) && nrow(rval) == nrow(frame)) {
            t1 <- dimnames(rval)
            dimnames(rval) <- list(attr(frame, "row.names"), 
                t1[[2L]])
        }
    }
    rval
}

# Examples
a <- model.frame(cbind(ncases,ncontrols) ~ agegp + tobgp + alcgp, data = esoph)
model.extract(a, "response")
stopifnot(model.extract(a, "response") == model.response(a))

a <- model.frame(ncases/(ncases+ncontrols) ~ agegp + tobgp + alcgp,
                 data = esoph, weights = ncases+ncontrols)
model.response(a)
(mw <- model.extract(a, "weights"))
stopifnot(identical(unname(mw), model.weights(a)))

a <- model.frame(cbind(ncases,ncontrols) ~ agegp,
                 something = tobgp, data = esoph)
names(a)
stopifnot(model.extract(a, "something") == esoph$tobgp)

