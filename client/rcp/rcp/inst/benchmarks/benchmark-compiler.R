#' Find and benchmark R files with execute functions using rcp
#'
#' This function recursively finds all R files starting at depth 2 in a directory,
#' loads them, and benchmarks each execute function using rcp::: rcp_cmppkg.
#'
#' @param directory The root directory to search in
#' @return A data frame with file paths and execution times
benchmark_rcp_execute <- function(directory = ". ") {
  # Validate directory exists

if (!dir.exists(directory)) {
    stop("Directory does not exist: ", directory)
  }
  
  # Find all R files recursively
  all_files <- list.files(
    path = directory,
    pattern = "\\.R$",
    recursive = TRUE,
    full.names = TRUE,
    ignore.case = TRUE
  )
  
  # Filter to only include files at depth >= 2
  # Depth is calculated relative to the base directory
  base_path <- normalizePath(directory)
  
  filter_by_depth <- function(file_path, min_depth = 2) {
    # Get relative path from base directory
    rel_path <- sub(paste0("^", gsub("([\\\\])", "\\\\\\1", base_path), "/? "), "", 
                    normalizePath(file_path))
    # Count directory separators to determine depth
    depth <- length(strsplit(rel_path, "/|\\\\")[[1]]) - 1  # -1 because last element is filename
    return(depth >= min_depth)
  }
  
  r_files <- all_files[sapply(all_files, filter_by_depth, min_depth = 2)]
  
  if (length(r_files) == 0) {
    message("No R files found at depth >= 2 in directory: ", directory)
    return(invisible(NULL))
  }
  
  message("Found ", length(r_files), " R files at depth >= 2")
  
  # Create environments to store each file's execute function
  execute_functions <- list()
  file_paths <- character()
  
  # Load all R files into memory
  for (file in r_files) {
    # Create a new environment for each file
    env <- new.env(parent = globalenv())
    
    tryCatch({
      source(file, local = env)
      
      # Check if execute function exists
      if (exists("execute", envir = env) && is.function(get("execute", envir = env))) {
        execute_functions[[length(execute_functions) + 1]] <- get("execute", envir = env)
        file_paths <- c(file_paths, file)
        message("Loaded:  ", file)
      } else {
        warning("No 'execute' function found in: ", file)
      }
    }, error = function(e) {
      warning("Failed to source file: ", file, "\n  Error: ", e$message)
    })
  }
  
  if (length(execute_functions) == 0) {
    message("No valid execute functions found")
    return(invisible(NULL))
  }
  
  message("\nLoaded ", length(execute_functions), " execute functions")
  message("Starting benchmark...\n")
  library(rcp)

rcp:::rcp_cmppkg("compiler")
rcp:::rcp_cmppkg("base")
rcp:::rcp_cmppkg("utils")
  
  # Initialize results storage
  results <- data.frame(
    file = character(),
    time_ms = numeric(),
    status = character(),
    stringsAsFactors = FALSE
  )
  
  # Start timing and run rcp:::rcp_cmppkg for each execute function
  total_start_time <- Sys.time()
  
  for (i in seq_along(execute_functions)) {
    file <- file_paths[i]
    execute_fn <- execute_functions[[i]]
    
    message("Running rcp_cmppkg for:  ", basename(file))
    
    start_time <- Sys.time()
    
    status <- tryCatch({
      compiler:::cmpfun(execute_fn)
      "success"
    }, error = function(e) {
      paste("error:", e$message)
    })
    
    end_time <- Sys.time()
    elapsed_ms <- as.numeric(difftime(end_time, start_time, units = "secs")) * 1000
    
    results <- rbind(results, data.frame(
      file = file,
      time_ms = elapsed_ms,
      status = status,
      stringsAsFactors = FALSE
    ))
  }
  
  total_end_time <- Sys.time()
  total_elapsed_ms <- as.numeric(difftime(total_end_time, total_start_time, units = "secs")) * 1000
  
  # Report results
  message("\n", paste(rep("=", 60), collapse = ""))
  message("BENCHMARK RESULTS")
  message(paste(rep("=", 60), collapse = ""))
  
  for (i in seq_len(nrow(results))) {
    message(sprintf("%-50s:  %.2f ms [%s]", 
                    basename(results$file[i]), 
                    results$time_ms[i],
                    results$status[i]))
  }
  
  message(paste(rep("-", 60), collapse = ""))
  message(sprintf("Total files processed: %d", nrow(results)))
  message(sprintf("Successful:  %d", sum(results$status == "success")))
  message(sprintf("Failed: %d", sum(results$status != "success")))
  message(sprintf("Total time: %.2f ms", total_elapsed_ms))
  message(sprintf("Average time per file: %.2f ms", 
                  mean(results$time_ms[results$status == "success"])))
  message(paste(rep("=", 60), collapse = ""))
  
  # Return results invisibly
  invisible(results)
}

# Example usage:
args <- commandArgs(trailingOnly = TRUE)
directory <- if (length(args) > 0) args[1] else stop("Usage: Rscript benchmark-compiler.R <directory>")
results <- benchmark_rcp_execute(directory)
