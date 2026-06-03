#? stdlib
`message` <- function (..., domain = NULL, appendLF = TRUE) 
{
    cond <- if (...length() == 1L && inherits(..1, "condition")) {
        if (nargs() > 1L) 
            warning("additional arguments ignored in message()")
        ..1
    }
    else {
        msg <- .makeMessage(..., domain = domain, appendLF = appendLF)
        call <- sys.call()
        simpleMessage(msg, call)
    }
    defaultHandler <- function(c) {
        cat(conditionMessage(c), file = stderr(), sep = "")
    }
    withRestarts({
        signalCondition(cond)
        defaultHandler(cond)
    }, muffleMessage = function() NULL)
    invisible()
}

# Examples
message("ABC", "DEF")
suppressMessages(message("ABC"))

testit <- function() {
  message("testing package startup messages")
  packageStartupMessage("initializing ...", appendLF = FALSE)
  Sys.sleep(1)
  packageStartupMessage(" done")
}

testit()
suppressPackageStartupMessages(testit())
suppressMessages(testit())

