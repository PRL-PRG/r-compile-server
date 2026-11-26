package org.prlprg.examples;

import static org.junit.jupiter.api.Assertions.assertTimeoutPreemptively;

import java.lang.reflect.Method;
import java.time.Duration;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.api.extension.InvocationInterceptor;
import org.junit.jupiter.api.extension.ReflectiveInvocationContext;
import org.junit.platform.commons.support.AnnotationSupport;
import org.prlprg.TestConfig;

/// Fails an example test that runs longer than [TestConfig#EXAMPLE_TIMEOUT], so one hung example
/// doesn't hang the run. Benchmarks are exempt.
///
/// The test runs in a separate thread, because a busy loop ignores interrupts, so the test thread
/// may never return. On timeout, the thread is interrupted and the next test starts at once. The
/// FIŘ interpreter and abstract interpretations check for interrupts, so they stop; other code may
/// keep the abandoned thread busy until it returns.
public final class ExampleTimeout implements InvocationInterceptor {
  @Override
  public void interceptTestTemplateMethod(
      Invocation<Void> invocation,
      ReflectiveInvocationContext<Method> invocationContext,
      ExtensionContext extensionContext)
      throws Throwable {
    var isBenchmark =
        AnnotationSupport.findAnnotation(invocationContext.getExecutable(), RExampleTest.class)
            .map(RExampleTest::benchmark)
            .orElse(false);
    if (isBenchmark || TestConfig.EXAMPLE_TIMEOUT <= 0) {
      invocation.proceed();
      return;
    }

    assertTimeoutPreemptively(
        Duration.ofSeconds(TestConfig.EXAMPLE_TIMEOUT),
        invocation::proceed,
        "Example test timed out (EXAMPLE_TIMEOUT = " + TestConfig.EXAMPLE_TIMEOUT + " s)");
  }
}
