package org.prlprg.bc2c;

import java.lang.reflect.RecordComponent;
import java.util.Arrays;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.util.Strings;

public record PerformanceCounters(
    int slowArith,
    int slowMath1,
    int slowUnary,
    int slowRelop,
    int slowSubset,
    int dispatchedSubset,
    int dispatchedSubassign) {
  public static PerformanceCounters EMPTY = empty();

  public static PerformanceCounters from(SEXP sexp) {
    if (!(sexp instanceof IntSXP v)) {
      throw new IllegalArgumentException("Expected int vector, got: " + sexp);
    }

    var fields = PerformanceCounters.class.getRecordComponents();
    var fieldNames =
        Arrays.stream(fields)
            .map(RecordComponent::getName)
            .map(Strings::camelCaseToSnakeCase)
            .toArray(String[]::new);

    var nums = v.coerceToInts();
    var names = v.names();
    if (names.size() != fields.length || names.size() != v.size()) {
      throw new IllegalArgumentException(
          "Expected named int of size: " + fields.length + ", got: " + sexp);
    }

    var constructor = PerformanceCounters.class.getConstructors()[0];
    try {
      var args = new Object[nums.length];
      for (int i = 0; i < nums.length; i++) {
        var name = names.get(i);
        var index = Arrays.asList(fieldNames).indexOf(name);
        if (index == -1) {
          throw new IllegalArgumentException("Unknown field name: '" + name + "'");
        }
        args[index] = nums[i];
      }
      return (PerformanceCounters) constructor.newInstance(args);
    } catch (Exception e) {
      throw new RuntimeException(e);
    }
  }

  private static PerformanceCounters empty() {
    var constructor = PerformanceCounters.class.getConstructors()[0];
    try {
      var args = new Object[constructor.getParameterCount()];
      Arrays.fill(args, 0);
      return (PerformanceCounters) constructor.newInstance(args);
    } catch (Exception e) {
      throw new RuntimeException(e);
    }
  }
}
