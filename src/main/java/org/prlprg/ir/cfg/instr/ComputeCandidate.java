package org.prlprg.ir.cfg.instr;

import java.util.Arrays;
import java.util.Objects;
import javax.annotation.Nullable;
import org.prlprg.util.InvalidAnnotationError;
import org.prlprg.util.NullableSupplier;
import org.prlprg.util.Strings;

/** For methods like {@link InstrData#fun()}, that are computed by an object's annotations, there
 * are multiple possible configurations of these annotations to compute the value, and exactly one
 * of these configurations must be set or {@link InvalidAnnotationError} is thrown.
 *
 * <p>Each "candidate" describes a single configuration. It contains a description of what
 * annotations are required by this configuration for error messages, and the nullable value
 * computed from these annotations that is non-null iff they are all present.
 * {@link ComputeCandidate#resolve(Object, ComputeCandidate...)} takes a list of these candidates
 * and returns the computed value if exactly one is non-null, otherwise throws the
 * {@link InvalidAnnotationError}.
 */
class ComputeCandidate<T> {
  /** If exactly one {@link ComputeCandidate} is non-null, return its value.
   *
   * <p>Otherwise, throw an {@link InvalidAnnotationError} with a message describing the problem.
   *
   * @param target Object with the annotations, used by the error message.
   */
  @SafeVarargs
  public static <T> T resolve(Object target, ComputeCandidate<T>... candidates) {
    var callee = Thread.currentThread().getStackTrace()[2].getMethodName();
    var successfulCandidates = Arrays.stream(candidates).filter(c -> c.value != null).toList();
    return switch (successfulCandidates.size()) {
      case 0 ->
          throw new InvalidAnnotationError(
              target.getClass().getSimpleName(),
              "No candidate found for `"
                  + callee
                  + "`:\n- "
                  + Strings.join("\n- ", c -> c.description, candidates));
      case 1 -> Objects.requireNonNull(successfulCandidates.getFirst().value);
      default ->
          throw new InvalidAnnotationError(
              target.getClass().getSimpleName(),
              "Multiple candidates found:\n- "
                  + Strings.join("\n- ", successfulCandidates));
    };
  }

  private final String description;
  private final @Nullable T value;

  static <T> ComputeCandidate<T> of(String description, @Nullable T value) {
    return new ComputeCandidate<>(description, value);
  }

  private ComputeCandidate(String description, @Nullable T value) {
    this.description = description;
    this.value = value;
  }

  @Override
  public String toString() {
    return description + " = " + value;
  }
}
