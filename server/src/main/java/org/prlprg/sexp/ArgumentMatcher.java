package org.prlprg.sexp;

import static org.prlprg.util.ExceptionRaiser.raise;

import com.google.common.collect.BiMap;
import com.google.common.collect.HashBiMap;
import com.google.common.collect.ImmutableBiMap;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.HashMap;
import java.util.List;
import java.util.stream.Stream;
import org.prlprg.util.Lists;
import org.prlprg.util.Pair;
import org.prlprg.util.Streams;

/// The argument matching algorithm as described in [The R manual](
/// https://cran.r-project.org/doc/manuals/r-release/R-lang.html#Argument-matching).
public class ArgumentMatcher {
  /// Returns a list of arguments as they would be passed to a function with the given formal
  /// parameters by a call with the given actual arguments.
  ///
  /// @param formalParameters The formal parameters of the function, including default values.
  /// @param unmatchedArguments The actual arguments passed to the call.
  /// @throws MatchException if matching fails: if there are arguments that match the same
  /// parameter with the same priority, or too many arguments.
  public static List<SEXP> matchArguments(ListSXP formalParameters, ListSXP unmatchedArguments) {
    // Expand `...`s if present (yes, there can be multiple).
    if (unmatchedArguments.names().contains("...")) {
      unmatchedArguments = unmatchedArguments.stream()
          .flatMap(argument -> argument.tagOrEmpty().equals("...")
              ? (argument.value() instanceof DotsListSXP ddd
                ? ddd.stream()
                : raise(new MatchException("`...` argument value isn't dots")))
              : Stream.of(argument))
          .collect(SEXPs.toList());
    }

    // Match parameter names to argument indices
    var nameMatches = matchArgumentNames(formalParameters.names(), unmatchedArguments.names());

    // Build list by iterating parameter names and extracting argument values from indices in
    // `nameMatches`.
    var result = ImmutableList.<SEXP>builderWithExpectedSize(formalParameters.size());
    for (var param : formalParameters) {
      var paramName = param.tagOrEmpty();
      var paramValue = param.value();
      var paramMatch = nameMatches.arguments.get(paramName);

      if (paramName.equals("...")) {
        result.addAll(Lists.mapLazy(nameMatches.dddIndices, unmatchedArguments::value));
      } else if (paramMatch != null) {
        result.add(unmatchedArguments.value(paramMatch));
      } else {
        result.add(paramValue);
      }
    }
    return result.build();
  }

  /// Returns a map of parameter name to index and a list of dots parameter names and indices
  /// via the [MatchResults] record.
  ///
  /// @throws IllegalArgumentException If one of the argument names is `...`.
  /// @throws MatchException if matching fails: if there are arguments that match the same
  /// parameter with the same priority, or too many arguments.
  public static MatchResults matchArgumentNames(List<String> formalParameters, List<String> unmatchedArgumentNames) {
    if (unmatchedArgumentNames.contains("...")) {
      throw new IllegalArgumentException("Argument '...' must be expanded before matching");
    }

    var dddNames = ImmutableList.<String>builder();
    var dddIndices = ImmutableList.<Integer>builder();
    var arguments = HashBiMap.<String, Integer>create();

    // From the R manual:
    // > **Exact matching on tags.** For each named supplied argument the list of formal arguments
    //   is searched for an item whose name matches exactly. It is an error to have the same formal
    //   argument match several actuals or vice versa.
    for (int i = 0; i < unmatchedArgumentNames.size(); i++) {
      var argName = unmatchedArgumentNames.get(i);
      if (argName.isEmpty()) {
        continue;
      }

      if (formalParameters.contains(argName)) {
        if (arguments.containsKey(argName)) {
          throw new MatchException("Argument '" + argName + "' matched multiple times");
        }
        arguments.put(argName, i);
      }
    }

    // > **Partial matching on tags**. Each remaining named supplied argument is compared to the
    //   remaining formal arguments using partial matching. If the name of the supplied argument
    //   matches exactly with the first part of a formal argument then the two arguments are
    //   considered to be matched. It is an error to have multiple partial matches. Notice that
    //   if f <- function(fumble, fooey) fbody, then f(f = 1, fo = 2) is illegal, even though the
    //   2nd actual argument only matches fooey. f(f = 1, fooey = 2) is legal though since the
    //   second argument matches exactly and is removed from consideration for partial matching.
    //   If the formal arguments contain ... then partial matching is only applied to arguments
    //   that precede it.
    var exactArguments = ImmutableMap.copyOf(arguments);
    var dddIndex = formalParameters.indexOf("...");
    var partialMatchEnd = dddIndex == -1 ? formalParameters.size() : dddIndex;
    for (int i = 0; i < unmatchedArgumentNames.size(); i++) {
      var argName = unmatchedArgumentNames.get(i);
      if (argName.isEmpty() || arguments.containsValue(i)) {
        continue;
      }

      int i1 = i;
      formalParameters.stream().limit(partialMatchEnd)
          .filter(name -> name.startsWith(argName) && !exactArguments.containsKey(name))
          .collect(Streams.zeroOneOrThrow(() -> new MatchException(
              "Argument '" + argName + "' matched multiple times partially")))
          .ifPresent(paramName -> arguments.put(paramName, i1));
    }

    // > **Positional matching.** Any unmatched formal arguments are bound to unnamed supplied
    //   arguments, in order. If there is a ... argument, it will take up the remaining arguments,
    //   tagged or not.
    var unmatchedFormals = formalParameters.stream()
        .limit(partialMatchEnd)
        .filter(name -> !arguments.containsKey(name))
        .iterator();
    for (int i = 0; i < unmatchedArgumentNames.size(); i++) {
      var argName = unmatchedArgumentNames.get(i);
      if (arguments.containsValue(i)) {
        continue;
      }

      if (unmatchedFormals.hasNext()) {
        var paramName = unmatchedFormals.next();
        arguments.put(paramName, i);
      } else if (dddIndex != -1) {
        dddNames.add(argName);
        dddIndices.add(i);
      } else {
        throw new MatchException("No formal parameter for argument " + (i + 1));
      }
    }

    return new MatchResults(dddNames.build(), dddIndices.build(), ImmutableMap.copyOf(arguments));
  }

  public record MatchResults(
      ImmutableList<String> dddNames,
      ImmutableList<Integer> dddIndices,
      ImmutableMap<String, Integer> arguments
  ) {}

  public static class MatchException extends IllegalArgumentException {
    public MatchException(String message) {
      super(message);
    }
  }

  private ArgumentMatcher() {}
}
