package org.prlprg.fir.module;

import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.function.Supplier;
import org.jetbrains.annotations.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.observer.Observer;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DeferredCallbacks;

public class Module {
  // Observers
  private final Set<Observer> observers = new LinkedHashSet<>();

  // Data
  private final Map<String, Function> functions = new LinkedHashMap<>();

  public @UnmodifiableView Collection<Function> functions() {
    return Collections.unmodifiableCollection(functions.values());
  }

  public @Nullable Function function(String name) {
    return functions.get(name);
  }

  public Function addFunction(String name) {
    return this.record(
        "Module#addFunction",
        List.of(this, name),
        () -> {
          if (functions.containsKey(name)) {
            throw new IllegalArgumentException("Function with name '" + name + "' already exists.");
          }
          var function = new Function(this, name);
          functions.put(name, function);
          return function;
        });
  }

  public void removeFunction(Function function) {
    this.record(
        "Module#removeFunction",
        List.of(this, function),
        () -> {
          if (!functions.remove(function.name(), function)) {
            throw new IllegalArgumentException("Function '" + function + "' does not exist.");
          }
          return null;
        });
  }

  public void addObserver(Observer observer) {
    observers.add(observer);
  }

  public void removeObserver(Observer observer) {
    observers.remove(observer);
  }

  public <T> T record(String func, List<Object> args, Supplier<T> action) {
    for (var observer : observers) {
      observer.before(func, args);
    }
    T returnValue;
    try {
      returnValue = action.get();
    } catch (Exception e) {
      for (var observer : observers) {
        observer.after(null);
      }
      throw e;
    }
    for (var observer : observers) {
      observer.after(returnValue);
    }
    return returnValue;
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    p.printSeparated("\n", functions.values());
  }

  @ParseMethod
  private static Module parse(org.prlprg.parseprint.Parser p) {
    var s = p.scanner();
    var module = new Module();

    var postModule = new DeferredCallbacks<Module>();

    var p1 = p.withContext(new Function.ParseContext(module, postModule, p.context()));
    while (!s.isAtEof() && !s.nextCharIs('}')) {
      var function = p1.parse(Function.class);
      if (module.functions.put(function.name(), function) != null) {
        throw new IllegalArgumentException(
            "Function with name '" + function.name() + "' already exists.");
      }
    }

    postModule.run(module);

    return module;
  }
}
