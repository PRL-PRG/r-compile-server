#? stdlib
`.GenericInPrimitiveMethods` <- function (mlist, f) 
{
    methods <- mlist@methods
    for (i in seq_along(methods)) {
        mi <- methods[[i]]
        if (is.function(mi)) {
            body(mi, envir = environment(mi)) <- substitute({
                .Generic <- FF
                BODY
            }, list(FF = f, BODY = body(mi)))
        }
        else if (is(mi, "MethodsList")) {
            .MlistDefunct()
            mi <- Recall(mi, f)
        }
        else stop(sprintf("internal error: Bad methods list object in fixing methods for primitive function %s", 
            sQuote(f)), domain = NA)
        methods[[i]] <- mi
    }
    mlist@methods <- methods
    mlist
}
