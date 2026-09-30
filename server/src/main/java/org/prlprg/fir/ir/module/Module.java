package org.prlprg.fir.ir.module;

import static org.prlprg.fir.GlobalModules.BUILTINS;
import static org.prlprg.fir.GlobalModules.INTRINSICS;

import java.util.Collection;
import java.util.Collections;
import java.util.LinkedHashMap;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.function.Supplier;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.abstraction.LazyBody;
import org.prlprg.fir.ir.observer.Observer;
import org.prlprg.fir.ir.variable.FunctionParameter;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.fir.parseprint.IrPrintContext;
import org.prlprg.fir.parseprint.ModuleParseContext;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

public final class Module {
  // Observers
  private final Set<Observer> observers = new LinkedHashSet<>();

  // Data
  private final Map<NamedVariable, Function> functions = new LinkedHashMap<>();

  // Pinning
  private int pins = 0;
  private final Map<Object, Runnable> deferred = new LinkedHashMap<>();

  public @UnmodifiableView Collection<Function> localFunctions() {
    return Collections.unmodifiableCollection(functions.values());
  }

  /// Lookup a function in this module or enclosing modules (the builtin and intrinsic modules).
  public @Nullable Function lookupFunction(NamedVariable name) {
    var f = functions.get(name);
    if (f != null) {
      return f;
    }
    f = BUILTINS.localFunction(name);
    if (f != null) {
      return f;
    }
    return INTRINSICS.localFunction(name);
  }

  /// Lookup a function in this module (but not enclosing ones).
  public @Nullable Function localFunction(NamedVariable name) {
    return functions.get(name);
  }

  /// Add a function with a baseline version.
  public Function addFunction(
      NamedVariable name, List<NamedVariable> parameterNames, boolean baselineIsStub) {
    return addFunction(
        name, parameterNames, Function.computeBaselineParameters(parameterNames), baselineIsStub);
  }

  /// Add a function with a baseline version.
  public Function addFunction(
      NamedVariable name,
      List<NamedVariable> parameterNames,
      List<FunctionParameter> baselineParameters,
      boolean baselineIsStub) {
    var function = addFunction(name, parameterNames);
    function.addBaseline(new Abstraction(function.owner(), baselineParameters, baselineIsStub));
    return function;
  }

  /// Add a function with a baseline version whose body is computed by `baselineBody` when it's
  /// first accessed.
  public Function addFunction(
      NamedVariable name, List<NamedVariable> parameterNames, LazyBody.Initializer baselineBody) {
    var function = addFunction(name, parameterNames);
    function.addBaseline(
        new Abstraction(
            function.owner(), Function.computeBaselineParameters(parameterNames), baselineBody));
    return function;
  }

  /// Add a function with no baseline.
  ///
  /// A function without a baseline is incomplete: you must call
  /// [Function#addBaseline(Abstraction)] to finish initializing it.
  public Function addFunction(NamedVariable name, List<NamedVariable> parameterNames) {
    return this.record(
        "Module#addFunction",
        List.of(this, name),
        () -> {
          if (functions.containsKey(name)) {
            throw new IllegalArgumentException("Function with name '" + name + "' already exists.");
          }
          var function = new Function(this, name, parameterNames);
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
        });
  }

  /// Keep the evaluated code in this module as it is until the returned pin is closed.
  ///
  /// For whoever holds on to the code across something that may change it, i.e. the interpreter:
  /// the instructions it's in the middle of running must not be optimized away under it, which
  /// evaluating a version (in particular, when the interpreter calls it) would otherwise do (see
  /// [#changeWhenUnpinned(Object, Runnable)]).
  ///
  /// Pins nest: the code can change again once every pin is closed.
  public Pin pin() {
    pins++;
    return new Pin();
  }

  /// Run `change`, which changes evaluated code, as soon as the module isn't [pinned][#pin()]:
  /// now if it isn't.
  ///
  /// If a change with the same `key` is already waiting, this one is dropped: `key` identifies
  /// changes that do the same thing when they're run at the same time, e.g. runs of the same
  /// optimizations.
  public void changeWhenUnpinned(Object key, Runnable change) {
    if (pins == 0) {
      change.run();
    } else {
      deferred.putIfAbsent(key, change);
    }
  }

  /// Keeps a module's evaluated code as it is until closed (see [Module#pin()]).
  public final class Pin implements AutoCloseable {
    private boolean closed = false;

    private Pin() {}

    /// Unpin the module, and if that was its last pin, run the changes that waited for it.
    @Override
    public void close() {
      if (closed) {
        return;
      }
      closed = true;
      pins--;

      while (pins == 0 && !deferred.isEmpty()) {
        var key = deferred.keySet().iterator().next();
        deferred.remove(key).run();
      }
    }
  }

  public void addObserver(Observer observer) {
    observers.add(observer);
  }

  public void removeObserver(Observer observer) {
    observers.remove(observer);
  }

  /// Run all observers associated with the given function and arguments, before and after
  /// `action`
  ///
  /// All mutating IR operations (except deferred initialization) must be wrapped in
  /// `module.record`
  public <T> T record(String func, List<Object> args, Supplier<T> action) {
    for (var observer : observers) {
      observer.before(func, args);
    }
    T returnValue;
    try {
      returnValue = action.get();
    } catch (Exception e) {
      for (var observer : observers) {
        observer.after(func, args, null);
      }
      throw e;
    }
    for (var observer : observers) {
      observer.after(func, args, returnValue);
    }
    return returnValue;
  }

  public void record(String func, List<Object> args, Runnable action) {
    record(
        func,
        args,
        () -> {
          action.run();
          return 0;
        });
  }

  /// Evaluate every unevaluated baseline, including those of the functions that adds (a
  /// function's inner closures are only added once its baseline is evaluated).
  public void evaluateBaselines() {
    while (true) {
      var unevaluated =
          List.copyOf(functions.values()).stream()
              .map(Function::baseline)
              .filter(baseline -> !baseline.isStub() && !baseline.isEvaluated())
              .toList();
      if (unevaluated.isEmpty()) {
        return;
      }
      for (var baseline : unevaluated) {
        baseline.body();
      }
    }
  }

  /// Whether any version is unevaluated.
  public boolean hasUnevaluated() {
    return functions.values().stream()
        .flatMap(function -> function.versions().stream())
        .anyMatch(version -> !version.isStub() && !version.isEvaluated());
  }

  /// Evaluate every unevaluated version, including those of functions and versions that
  /// evaluating another one adds (e.g. an inner closure, or a version created by the
  /// optimizations that run when a version is evaluated).
  public void evaluateAll() {
    while (true) {
      var unevaluated =
          List.copyOf(functions.values()).stream()
              .flatMap(function -> function.versions().stream())
              .filter(version -> !version.isStub() && !version.isEvaluated())
              .toList();
      if (unevaluated.isEmpty()) {
        return;
      }
      for (var version : unevaluated) {
        version.body();
      }
    }
  }

  /// Copy this module by printing and re-parsing it.
  ///
  /// Unevaluated versions aren't printed, so the copy doesn't have them (see
  /// [#evaluateAll()]).
  ///
  /// @throws org.prlprg.parseprint.ParseException If a function's baseline is unevaluated.
  public Module deepCopy() {
    return Parser.fromString(toString(), Module.class);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  /// A module can be printed without any surrounding information, so this forwards to
  /// [IrPrintContext] and callers can just `p.print(module)`.
  @PrintMethod
  private void print(Printer p) {
    p.withContext(new IrPrintContext()).print(this);
  }

  /// A module can be parsed without any surrounding information, so this forwards to
  /// [ModuleParseContext] and callers can just `p.parse(Module.class)`.
  @ParseMethod
  private static Module parse(Parser p) {
    return p.withContext(new ModuleParseContext()).parse(Module.class);
  }
}
