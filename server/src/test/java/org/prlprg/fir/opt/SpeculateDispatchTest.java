package org.prlprg.fir.opt;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertTrue;

import java.util.List;
import java.util.Objects;
import java.util.Set;
import java.util.stream.Collectors;
import org.junit.jupiter.api.Test;
import org.prlprg.fir.feedback.MockModuleFeedback;
import org.prlprg.fir.ir.ParseUtil;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.Variable;
import org.prlprg.parseprint.Parser;

class SpeculateDispatchTest {
  private static final int THRESHOLD = 10;

  private static Function f() {
    var module =
        ParseUtil.parseModule(
            """
            fun f(x, y) {
              (x:*, y:*) -+> V {
                v: V = force? x;
                w: V = force? y;
                return v;
              }
            }
            """);
    return Objects.requireNonNull(module.localFunction(Variable.named("f")));
  }

  /// Record `hitsPerParameter` (per parameter of `f`'s baseline: a type, its hits, a type, its
  /// hits, ...), run [SpeculateDispatch] on the baseline, and return the parameter types of the
  /// versions it created.
  private static Set<List<String>> speculate(Function f, List<List<Object>> hitsPerParameter) {
    var version = f.baseline();
    var feedback = new MockModuleFeedback(f.owner()).get(version);
    for (var i = 0; i < hitsPerParameter.size(); i++) {
      var parameter = version.parameters().get(i);
      var hits = hitsPerParameter.get(i);
      for (var j = 0; j < hits.size(); j += 2) {
        var type = Parser.fromString((String) hits.get(j), Type.class);
        for (var k = 0; k < (int) hits.get(j + 1); k++) {
          feedback.recordType(parameter, type);
        }
      }
    }

    assertTrue(new SpeculateDispatch(THRESHOLD, 3, 9).run(f, feedback, version));
    return f.versions().stream()
        .filter(v -> v != version)
        .map(SpeculateDispatchTest::parameterTypes)
        .collect(Collectors.toSet());
  }

  private static List<String> parameterTypes(Abstraction version) {
    return version.parameters().stream().map(FunctionParameter::type).map(Type::toString).toList();
  }

  @Test
  void typesOfTheSameRankGoTogether() {
    var created =
        speculate(
            f(), List.of(List.of("v1(R)", 20, "v1(I)", 15), List.of("v1(R)", 20, "v1(I)", 15)));
    assertEquals(Set.of(List.of("v1(R)", "v1(R)"), List.of("v1(I)", "v1(I)")), created);
  }

  @Test
  void ranksAreByHitsNotByOrderRecorded() {
    var created =
        speculate(
            f(), List.of(List.of("v1(I)", 15, "v1(R)", 20), List.of("v1(R)", 20, "v1(I)", 15)));
    assertEquals(Set.of(List.of("v1(R)", "v1(R)"), List.of("v1(I)", "v1(I)")), created);
  }

  @Test
  void parameterWithoutHitsKeepsItsType() {
    var created = speculate(f(), List.of(List.of("v1(R)", 20, "v1(I)", 15), List.of("v1(R)", 5)));
    assertEquals(Set.of(List.of("v1(R)", "*"), List.of("v1(I)", "*")), created);
  }
}
