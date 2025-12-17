fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3251616947;
    st `selfStart.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3251616947(model, initial, parameters, template) {
  (reg model:*, reg initial:*, reg parameters:*, reg template:*) -+> V { var model:*, var initial:*, var parameters:*, var template:*, reg structure:cls, reg as_function:cls, reg model1:*, reg model2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg as_function1:cls, reg initial1:*, reg initial2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg missing:cls, reg r8:V, reg r9:V, reg c:L, reg parameters1:*, reg parameters2:V, reg p4:p(V +), reg r11:V |
    mkenv;
    st model = model;
    st initial = initial;
    st parameters = parameters;
    st template = template;
    structure = ldf structure;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      as_function = ldf `as.function`;
      p = prom<V +>{
        model1 = ld model;
        model2 = force? model1;
        checkMissing(model2);
        return model2;
      };
      r1 = dyn as_function(p);
      return r1;
    };
    p3 = prom<V +>{
      as_function1 = ldf `as.function`;
      p2 = prom<V +>{
        initial1 = ld initial;
        initial2 = force? initial1;
        checkMissing(initial2);
        return initial2;
      };
      r4 = dyn as_function1(p2);
      return r4;
    };
    p4 = prom<V +>{
      sym = ldf missing;
      base = ldf missing in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r7):
      r9 = `!`(r7);
      c = `as.logical`(r9);
      if c then L4() else L1();
    L2():
      missing = ldf missing in base;
      r8 = dyn missing(<sym parameters>);
      goto L0(r8);
    L3():
      r6 = dyn base(<sym parameters>);
      goto L0(r6);
    L1():
      invisible.0();
      return NULL;
    L4():
      parameters1 = ld parameters;
      parameters2 = force? parameters1;
      checkMissing(parameters2);
      return parameters2;
    };
    r11 = dyn structure[, initial, pnames, class](p1, p3, p4, "selfStart");
    check L1() else D1();
  D1():
    deopt 9 [r11];
  L1():
    popenv;
    return r11;
  }
}