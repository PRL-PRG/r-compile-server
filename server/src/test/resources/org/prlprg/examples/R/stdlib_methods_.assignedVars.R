#? stdlib
`.assignedVars` <- function (e) 
{
    locals <- list()
    globals <- list()
    walker <- codetools::makeCodeWalker(call = function(e, w) {
        callto <- e[[1]]
        if (is.symbol(callto)) 
            switch(as.character(callto), `<-` = , `=` = {
                locals <<- .mergeAssigns(locals, .assignExpr(e))
            }, `<<-` = {
                globals <<- .mergeAssigns(globals, .assignExpr(e))
            })
        for (ee in as.list(e)) if (!missing(ee)) 
            codetools::walkCode(ee, w)
    }, leaf = function(e, w) NULL)
    codetools::walkCode(e, walker)
    list(locals = locals, globals = globals)
}
