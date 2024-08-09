package org.prlprg.util;

import static org.prlprg.TestConfig.FAST_TESTS;

import com.google.common.collect.ImmutableSet;
import java.lang.annotation.Documented;
import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.junit.jupiter.api.extension.ExtensionContext;
import org.junit.jupiter.params.provider.Arguments;
import org.junit.jupiter.params.provider.ArgumentsProvider;
import org.junit.jupiter.params.provider.ArgumentsSource;
import org.junit.jupiter.params.support.AnnotationConsumer;

/** List all files in a directory and provide each one's path as an argument. */
@Documented
@Target(ElementType.METHOD)
@Retention(RetentionPolicy.RUNTIME)
@ArgumentsSource(DirectoryArgumentsProvider.class)
public @interface DirectorySource {
  /** Filter files by glob applied to the filename. Default is to not filter. */
  @Nullable String glob();

  /** Whether to include directories. Default is to not. */
  boolean includeDirs() default false;

  /** Whether to relativize the paths to {@link #root}. Default is to not. */
  boolean relativize() default false;

  /**
   * Specify a number > 1 to include files in subdirectories. Specify INT_MAX to recurse infinitely.
   * Defaults to 1.
   */
  int depth() default 1;

  /**
   * Directory to list files from, defaults to corresponding resources directory of the test
   * directory. Paths will be relative to this default unless they start with {@code /}
   */
  String root() default "";

  /** Paths to exclude. */
  String[] exclude() default {};

  /**
   * When {@link org.prlprg.TestConfig#FAST_TESTS FAST_TESTS} is set, choose the first subset of
   * files which meet the above criteria to test instead of testing them all. Defaults to running
   * all tests regardless.
   */
  int fastLimit() default Integer.MAX_VALUE;
}

class DirectoryArgumentsProvider implements ArgumentsProvider, AnnotationConsumer<DirectorySource> {
  private boolean accepted = false;
  private @Nullable String glob;
  private boolean includeDirs;
  private boolean relativize;
  private int depth;
  private Path root = Paths.get("");
  private ImmutableSet<String> exclude = ImmutableSet.of();
  int fastLimit;

  @Override
  public void accept(DirectorySource directorySource) {
    accepted = true;
    glob = directorySource.glob();
    includeDirs = directorySource.includeDirs();
    relativize = directorySource.relativize();
    root = Paths.get(directorySource.root());
    depth = directorySource.depth();
    exclude = ImmutableSet.copyOf(directorySource.exclude());
    fastLimit = directorySource.fastLimit();
  }

  @Override
  public Stream<? extends Arguments> provideArguments(ExtensionContext context) {
    assert accepted;
    var path = Tests.getResourcePath(context.getRequiredTestClass(), root);
    var cases =
        Files.listDir(path, glob, depth, includeDirs, relativize).stream()
            .filter(p -> !exclude.contains(p.toString()))
            .map(Arguments::of);
    if (FAST_TESTS && fastLimit < Integer.MAX_VALUE) {
      cases = cases.limit(fastLimit);
    }
    return cases;
  }
}
