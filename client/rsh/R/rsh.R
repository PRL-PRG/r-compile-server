## usethis namespace: start
#' @importFrom compiler cmpfun
## usethis namespace: end
NULL

# save the original compiler::cmpfun
.gnur_cmpfun <- compiler::cmpfun

# ANSI color helpers
ansi_green <- function(x) paste0("\033[32m", x, "\033[0m")
ansi_red <- function(x) paste0("\033[31m", x, "\033[0m")

# Because of the ORC JIT we need all the native symbols registered globally
# (as RTLD_GLOBAL) so the ORC linker can find them. Unfortunatelly, R does
# not provide a way to instruct the namespace loader to load pass the
# local = FALSE flag to dyn.load. This is a workaround in which we
# manually load the shared object and register all the symbols in the
# rsh namespace.
#
# Note: this only works as long as there is no useDynLib directive in
# the NAMESPACE file.
.onLoad <- function(libname, pkgname) {
  so <- library.dynam("rsh", pkgname, lib.loc=.libPaths(), local=FALSE)
  symbols <- getDLLRegisteredRoutines(so, addNames=FALSE)
  env <- getNamespace(pkgname)
  lapply(symbols,
    function(type) {
      lapply(type,
        function(sym) {
          var_name <- paste0("C_", sym$name)
          env[[var_name]] <- sym
        }
      )
    }
  )

  .Call(C_initialize)

   # for the client, so that it is not GC-ed
  env[[".rsh_client"]] <- init_client("0.0.0.0", 8980L)
}

#' Initialize the Rsh client
#'
#' @param address IP address of the server
#' @param port port of the server
#' @export
init_client <- function(address="0.0.0.0", port=8980L) {
  .rsh_client <- .Call(C_init_client, address, port, installed.packages()[,1])
  .rsh_client
}

#' Activate the Rsh JIT
#'
#' @export
rsh_jit_enable <- function() {
    rsh_override_cmpfun(rsh_cmpfun)
}

#' Deactivate the Rsh JIT
#'
#' @export
rsh_jit_disable <- function() {
    rsh_override_cmpfun(.gnur_cmpfun)
}

#' Compile given closure
#'
#' It compiles the given closure and changes it inplace.
#'
#' @param f closure to be compiled
#' @param options list of BC2C compiler options
#' @export
rsh_compile <- function(f, options) {
  if (missing(options)) {
    options <- list()
  }
  if (!is.list(options)) {
    stop("options must be a list")
  }

  # FIXME: this does not work, we need to find the closure in the environment
  if (is.null(options$name)) {
    options$name <- as.character(substitute(f))
  }

  if (is.null(options$debug)) {
    options$debug <- TRUE
  }

  if (is.null(options$inplace)) {
    options$inplace <- TRUE
  }

  if(is.null(options$tier)) {
    options$tier <- "optimized"
  }

  if(is.null(options$cache)) {
    options$cache <- TRUE
  }

  result <- .Call(C_compile, f, options)
  invisible(result)
}

#' Compile given closure
#'
#' It makes a copy the given closure and compiles it.
#'
#' @param f closure to be compiled
#' @param options list of GNU R bytecode compiler options
#' @return compiled closure
#' @export
rsh_cmpfun <- function(f, options) {
  if (missing(options)) {
    options <- list()
  }
  stopifnot(is.list(options))

  if (!is.null(options$optimize)) {
    options$bc_opt <- as.integer(options$optimize)
    options$optimize <- NULL
  }

  # FIXME: this does not work, we need to find the closure in the an environment
  if (is.null(options$name)) {
    options$name <- as.character(substitute(f))
  }
  options$inplace <- FALSE

  result <- rsh_compile(f, options)
  result$closure
}

#' Check if the closure is natively compiled
#'
#' @param f closure to be checked
#' @return TRUE if the closure is compiled, FALSE otherwise
#' @export
is_compiled <- function(f) {
  .Call(C_is_compiled, f)
}

rsh_override_cmpfun <- function(f) {
  compiler_ns <- getNamespace("compiler")
  unlockBinding("cmpfun", compiler_ns)
  compiler_ns$cmpfun <- f
  lockBinding("cmpfun", compiler_ns)
}

#' Get the total size of the messages sent 
#' and received by the server, in bytes
#' @return integer vector of size 2, the first element is the total size of requests, 
#' and the second element is the total size of responses
#' @export 
rsh_total_size <- function() {
  .Call(C_get_total_size)
}

#' Clear both the bytecode cache and the native cache of the Rsh server
#' @export
rsh_clear_cache <- function() {
  .Call(C_clear_cache)
}

is_closure <- function(f) {
    typeof(f) == "closure"
}

#' Compile all functions in a given package or environment
#'
#' Compiles all functions from the given package or environment
#'
#' @param package either a character string specifying the package name or an environment
#' @param options additional arguments passed to rsh_cmpfun
#' @param quiet logical; if FALSE, shows progress for each function
#' @return a data.frame with compilation results for each function
#' @export
rsh_cmppkg <- function(package, options = list(), quiet = FALSE) {
  pkg_name <- NULL

  if (is.character(package)) {
    if (length(package) != 1) {
      stop("package must be a character string of length 1")
    }

    pkg_name <- package

    if (!quiet) {
      cat("Compiling package:", package, "\n")
    }

    tryCatch({
      pkg_ns <- loadNamespace(package)
    }, error = function(e) {
      stop("Failed to load namespace for package '", package, "': ", e$message)
    })
  } else if (is.environment(package)) {
    pkg_ns <- package
    pkg_name <- environmentName(pkg_ns)
    if (pkg_name == "" || is.null(pkg_name)) {
      pkg_name <- "<env>"
    }
    if (!quiet) {
      cat("Compiling environment:", pkg_name, "\n")
    }
  } else {
    stop("package must be either a character string or an environment")
  }

  all_names <- ls(pkg_ns, all.names = TRUE)

  func_names <- character(0)
  for (name in all_names) {
    obj <- get(name, envir = pkg_ns, inherits = FALSE)
    if (is_closure(obj)) {
      func_names <- c(func_names, name)
    }
  }

  total_functions <- length(func_names)

  if (total_functions == 0) {
    return(data.frame(
      name = character(0),
      symbol_name = character(0),
      binary_size = integer(0),
      constants_size = integer(0),
      compile_time_ms = numeric(0),
      bytecode_instructions = integer(0),
      bytecode_compile_time_ms = numeric(0),
      c_compile_time_ms = numeric(0),
      native_compile_time_ms = numeric(0),
      object_file = character(0),
      constants_file = character(0),
      source_file = character(0),
      error = character(0),
      warning = character(0),
      stringsAsFactors = FALSE
    ))
  }

  results <- vector(mode = "list", length = length(func_names))
  compiled_env <- new.env()
  options$inplace <- FALSE
  compiled_functions <- 0

  for (i in seq_along(func_names)) {
    func_name <- func_names[i]
    full_name <- paste0(pkg_name, ":::", func_name)

    func <- get(func_name, envir = pkg_ns, inherits = FALSE)

    info <- list(name = full_name)

    tryCatch({
      options$name <- func_name
      warning <- NA_character_

      result <-
        withCallingHandlers({
          rsh::rsh_compile(func, options)
        }, warning = function(w) {
          msg <- conditionMessage(w)
          if (is.na(warning)) {
            warning <<- msg
          } else {
            warning <<- paste(warning, msg, sep = "; ")
          }
          invokeRestart("muffleWarning")
        })

      compiled_func <- result$closure
      info <- c(name = full_name, result$info, error = NA_character_, warning = warning)

      if (!quiet) {
        progress <- paste0("[", i, "/", total_functions, "] ")
        message <- paste0(progress, func_name, " ", ansi_green("OK"), " (binary: ", info$binary_size, " bytes")
        message <- paste0(message, ", constants: ", info$constants_size, " bytes")
        message <- paste0(message, ", time: ", round(info$compile_time_ms, 2), " ms")

        if (!is.na(info$bytecode_instructions)) {
          message <- paste0(message, ", bc_instrs: ", info$bytecode_instructions)
        }
        if (!is.na(info$bytecode_compile_time_ms) && info$bytecode_compile_time_ms > 0) {
          message <- paste0(message, ", bc_time: ", round(info$bytecode_compile_time_ms, 2), " ms")
        }
        if (!is.na(info$c_compile_time_ms) && info$c_compile_time_ms > 0) {
          message <- paste0(message, ", c_time: ", round(info$c_compile_time_ms, 2), " ms")
        }
        if (!is.na(info$native_compile_time_ms) && info$native_compile_time_ms > 0) {
          message <- paste0(message, ", native_time: ", round(info$native_compile_time_ms, 2), " ms")
        }

        if (!is.na(info$object_file)) {
          message <- paste0(message, ", saved: ", info$object_file, ", ", info$constants_file)
        }

        if (!is.na(info$source_file)) {
          message <- paste0(message, ", ", info$source_file)
        }

        cat(message, ")\n", sep = "")
      }

      assign(func_name, compiled_func, envir = compiled_env)
      compiled_functions <- compiled_functions + 1
    }, error = function(e) {
      if (!quiet) {
        cat("[", i, "/", total_functions, "] ", func_name, " ", ansi_red("Err"), " (", e$message, ")\n", sep = "")
      }

      info <<- c(info,
        symbol_name = NA_character_,
        binary_size = NA_integer_,
        constants_size = NA_integer_,
        compile_time_ms = NA_real_,
        bytecode_instructions = NA_integer_,
        bytecode_compile_time_ms = NA_real_,
        c_compile_time_ms = NA_real_,
        native_compile_time_ms = NA_real_,
        object_file = NA_character_,
        constants_file = NA_character_,
        source_file = NA_character_,
        error = e$message,
        warning = warning
      )
    })

    results[[i]] <- info
  }


  # replace in the original environment
  for (func_name in ls(compiled_env, all.names = TRUE)) {
    tryCatch({
      unlockBinding(func_name, pkg_ns)
      assign(func_name, get(func_name, envir = compiled_env), envir = pkg_ns)
      lockBinding(func_name, pkg_ns)
    }, error = function(e) {
      if (!quiet) {
        cat("Warning: Failed to replace function '", func_name, "': ", e$message, "\n", sep = "")
      }
    })
  }

  if (!quiet) {
    cat("Compilation complete: ", compiled_functions, "/", total_functions, " functions\n", sep = "")
  }

  do.call(rbind, lapply(results, as.data.frame, stringsAsFactors = FALSE))
}
