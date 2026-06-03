#? stdlib
`getInitial.selfStart` <- function (object, data, mCall, LHS = NULL, ...) 
{
    iniFn <- attr(object, "initial")
    if (length(formals(iniFn)) > 3L) 
        iniFn(mCall = mCall, data = data, LHS = LHS, ...)
    else {
        .Deprecated(msg = "selfStart initializing functions should have a final '...' argument since R 4.1.0")
        iniFn(mCall = mCall, data = data, LHS = LHS)
    }
}
