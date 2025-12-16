#? stdlib
`getInitial.default` <- function (object, data, mCall, LHS = NULL, ...) 
{
    if (is.function(object) && !is.null(attr(object, "initial"))) {
        stop("old-style self-starting model functions\n", "are no longer supported.\n", 
            "New selfStart functions are available.\n", "Use\n", 
            "  SSfpl instead of fpl,\n", "  SSfol instead of first.order.log,\n", 
            "  SSbiexp instead of biexp,\n", "  SSlogis instead of logistic.\n", 
            "If writing your own selfStart model, see\n", "  \"help(selfStart)\"\n", 
            "for the new form of the \"initial\" attribute.", 
            domain = NA)
    }
    stop(gettextf("no 'getInitial' method found for \"%s\" objects", 
        data.class(object)), domain = NA)
}
