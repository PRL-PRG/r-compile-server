package org.prlprg.examples;

import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import org.junit.jupiter.api.Tag;
import org.junit.jupiter.api.extension.ExtendWith;
import org.junit.jupiter.params.ParameterizedTest;
import org.junit.jupiter.params.provider.ArgumentsSource;
import org.prlprg.snapshots.SnapshotStoreParameterResolver;

/// Run the test once for each R example.
///
/// The arguments given to the test are [Example] and [org.prlprg.snapshots.SnapshotStore].
@Documented
@Target({ElementType.ANNOTATION_TYPE, ElementType.METHOD})
@Retention(RetentionPolicy.RUNTIME)
@Tag("R")
@Tag("examples")
@ParameterizedTest(allowZeroInvocations = true)
@ArgumentsSource(RExampleProvider.class)
@ExtendWith(SnapshotStoreParameterResolver.class)
public @interface RExampleTest {
  String option() default "";
}
