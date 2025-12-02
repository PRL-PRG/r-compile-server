package org.prlprg.bc;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.util.SingletonParameterResolver.resolveSingleton;

import java.lang.reflect.Method;
import javax.annotation.Nullable;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.prlprg.session.snapshot.RDSSnapshotExtension;
import org.prlprg.sexp.*;
import org.prlprg.util.Files;
import org.prlprg.util.ThrowingSupplier;
import org.prlprg.session.gnur.GNUR;
import org.prlprg.session.snapshot.RDSFileSnapshotStoreFactory;
import org.prlprg.util.snapshot.SnapshotExtension;
import org.prlprg.util.snapshot.SnapshotStoreFactory;

public class BCSnapshotTestExtension extends RDSSnapshotExtension<BCSnapshotTestExtension.TestResult> {
  public record TestResult(String code, int optimizationLevel, SEXP body) {}

  @Override
  protected SEXP serializeTestResult(TestResult testResult) {
    return SEXPs.vec(SEXPs.string(testResult.code), SEXPs.integer(testResult.optimizationLevel), testResult.body);
  }

  @Override
  protected TestResult deserializeTestResult(SEXP value) {
    if (!(value instanceof VecSXP v) || v.size() != 3) {
      throw new IllegalArgumentException("Expected a vector of length 3, got: " + value);
    }

    var code =
        v.get(0)
            .asScalarString()
            .orElseThrow(() -> new IllegalArgumentException("Expected a string"));
    var optimizationLevel =
        v.get(1)
            .asScalarInteger()
            .orElseThrow(() -> new IllegalArgumentException("Expected an integer"));
    var body = v.get(2);

    return new TestResult(code, optimizationLevel, body);
  }

  @Override
  protected void checkEqual(TestResult expected, TestResult actual) {
    assertEquals(expected.code(), actual.code(), "Source code mismatch");
    assertEquals(
        expected.optimizationLevel(), actual.optimizationLevel(), "Optimization level mismatch");

    if ((expected.body() instanceof BCodeSXP expectedBody)
        && (actual.body() instanceof BCodeSXP actualBody)) {
      if (!expectedBody.equals(actualBody)) {
        // bytecode can be large, so we only want to do it when it is different
        assertEquals(expectedBody.toString(), actualBody.toString(), "Bytecode mismatch");

        fail("Produced bytecode is different, but the toString() representation is the same.");
      }
    } else {
      assertEquals(expected.body(), actual.body(), "Bytecode mismatch");
    }
  }

  @Override
  protected Object createSnapshot(Method testMethod) {
    return new BCSnapshot() {
      int seq = 0;

      @Override
      public void verify(String code, int optimizeLevel) {
        verify(String.valueOf(++seq), code, optimizeLevel);
      }

      @Override
      public void verify(String name, String code, int optimizationLevel) {
        var body = bcCompileBody(code, optimizationLevel);
        var res = new TestResult(code, optimizationLevel, body);
        BCSnapshotTestExtension.this.verify(
            testMethod, name, res, oracle(name, code, optimizationLevel), true);
      }
    };
  }

  @Override
  protected Class<?> getSnapshotClass() {
    return BCSnapshot.class;
  }

  protected SEXP bcCompileBody(String code, int optimizationLevel) {
    var temp = Files.writeString(code);
    try (var R = R()) {
      CloSXP fun = (CloSXP) R.eval("eval(parse('" + temp + "'))");
      var compiler = new BCCompiler(fun, R.getSession());
      compiler.setOptimizationLevel(optimizationLevel);
      return compiler.compile().<SEXP>map(SEXPs::bcode).orElse(fun.body());
    } catch (Exception e) {
      throw e instanceof RuntimeException re ? re : new RuntimeException(e);
    } finally {
      Files.delete(temp);
    }
  }

  protected ThrowingSupplier<TestResult> oracle(String name, String code, int optimizationLevel) {
    return () -> {
      var temp = Files.writeString(code);
      try (var R = R()) {
        var value =
            R.eval(
                "compiler::cmpfun(eval(parse('"
                    + temp
                    + "')), options = list(optimize = "
                    + optimizationLevel
                    + "))");
        if (!(value instanceof CloSXP closure)) {
          throw new IllegalArgumentException("Expected a closure, got: " + value);
        }

        return new TestResult(code, optimizationLevel, closure.body());
      } catch (Exception e) {
        throw e instanceof RuntimeException re ? re : new RuntimeException(e);
      } finally {
        Files.delete(temp);
      }
    };
  }

  public interface BCSnapshot {
    default void verify(String code) {
      verify(code, BCCompiler.DEFAULT_OPTIMIZATION_LEVEL);
    }

    void verify(String code, int optimizeLevel);

    void verify(String name, String code, int optimizationLevel);
  }
}
