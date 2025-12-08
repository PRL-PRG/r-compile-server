package org.prlprg.examples;

import com.google.common.collect.ForwardingList;
import com.google.common.collect.ImmutableList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.annotation.Nullable;
import javax.annotation.concurrent.Immutable;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

@Immutable
public class ExampleOptions extends ForwardingList<ExampleOption> {
  private final ImmutableList<ExampleOption> ordered;
  private final Map<String, Map<String, ExampleOption>> organized = new HashMap<>();

  public ExampleOptions(ImmutableList<ExampleOption> options) {
    ordered = options;
    for (var option : options) {
      var filters = option.filter() == null ? Set.of("") : option.filter();
      for (var filter : filters) {
        var filteredOptions = organized.computeIfAbsent(filter, _ -> new HashMap<>());
        if (filteredOptions.containsKey(option.name())) {
          throw new IllegalArgumentException(
              "Duplicate option \"" + option.name() + "\" for filter \"" + filter + "\"");
        }
        filteredOptions.put(option.name(), option);
      }
    }
  }

  public @Nullable ExampleOption get(String filter, String name) {
    var anyOptions = organized.get("");
    var filteredOptions = filter.isEmpty() ? null : organized.get(filter);
    if (filteredOptions != null && filteredOptions.containsKey(name)) {
      return filteredOptions.get(name);
    }
    if (anyOptions != null && anyOptions.containsKey(name)) {
      return anyOptions.get(name);
    }
    return null;
  }

  @Override
  protected List<ExampleOption> delegate() {
    return ordered;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @ParseMethod
  private static ExampleOptions parse(Parser p) {
    var s = p.scanner();

    var options = ImmutableList.<ExampleOption>builder();
    while (s.trySkip("#? ")) {
      options.add(p.parse(ExampleOption.class));
    }

    return new ExampleOptions(options.build());
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    for (var option : this) {
      w.write("#? ");
      p.print(option);
      w.write('\n');
    }
  }
}
