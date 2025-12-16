#? stdlib
`.mergeImportMethods` <- function (impenv, expenv, metaname) 
{
    impMethods <- impenv[[metaname]]
    if (!is.null(impMethods)) 
        impenv[[metaname]] <- methods:::.mergeMethodsTable2(impMethods, 
            newtable = expenv[[metaname]], expenv, metaname)
    impMethods
}
