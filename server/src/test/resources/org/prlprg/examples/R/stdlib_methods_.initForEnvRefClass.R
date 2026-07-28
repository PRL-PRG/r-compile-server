#? stdlib
`.initForEnvRefClass` <- function (.Object, ...) 
{
    Class <- class(.Object)
    classDef <- getClass(Class)
    objectParent <- classDef@refMethods$.objectParent
    if (is.null(objectParent)) {
        objectParent <- .NamespaceOrPackage(classDef@package)
    }
    selfEnv <- new.env(TRUE, objectParent)
    .Object@.xData <- selfEnv
    prototypes <- classDef@fieldPrototypes
    fieldClasses <- classDef@fieldClasses
    fields <- names(fieldClasses)
    for (field in fields) {
        fp <- prototypes[[field]]
        if (is(fp, "activeBindingFunction")) {
            environment(fp) <- selfEnv
            makeActiveBinding(field, fp, selfEnv)
            if (is(fp, "defaultBindingFunction")) {
                class <- fieldClasses[[field]]
                value <- if (!isVirtualClass(class)) 
                  new(class)
                assign(.bindingMetaName(field), value, envir = selfEnv)
            }
        }
        else assign(field, fp, envir = selfEnv)
    }
    selfEnv$.self <- .Object
    selfEnv$.refClassDef <- classDef
    if (is.function(classDef@refMethods$initialize)) {
        .Object$initialize(...)
        .Object <- selfEnv$.self
    }
    else {
        if (nargs() > 1) {
            .Object <- methods::initRefFields(.Object, classDef, 
                selfEnv, list(...))
        }
    }
    if (is.function(classDef@refMethods$finalize)) 
        reg.finalizer(selfEnv, function(x) x$.self$finalize(), 
            TRUE)
    lockBinding(".self", selfEnv)
    lockBinding(".refClassDef", selfEnv)
    if (is(classDef@validity, "function")) 
        validObject(.Object)
    .Object
}
