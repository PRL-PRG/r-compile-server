fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner851005753;
    st `getInitial.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner851005753(object, data, `...`) {
  (reg object:*, reg data:*, reg ddd:dots) -+> V { var object:*, var data:*, var `...`:dots?, reg ____:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg data1:*, reg data2:V, reg attr:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg object1:*, reg object2:V, reg length:cls, reg r6:V, reg len:*, reg len1:V, reg r7:V, reg c:L, reg stop:cls, reg r8:V, reg len2:*, reg len3:V, reg r10:V, reg c1:L, reg object3:*, reg object4:V, reg c2:L, reg object6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg dx2:V, reg object7:*, reg object8:V, reg c3:L, reg object10:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg len4:*, reg len5:V, reg __1:cls, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg RHS:*, reg RHS1:V, reg is_call:cls, reg r15:V, reg r16:V, reg c4:L, reg stop1:cls, reg r17:V, reg eval:cls, reg RHS2:*, reg RHS3:V, reg c5:L, reg RHS5:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg __2:cls, reg r19:V, reg p1:p(V +), reg environment:cls, reg object11:*, reg object12:V, reg p2:p(V +), reg r22:V, reg p3:p(V +), reg r24:V, reg getInitial:cls, reg func:*, reg func1:V, reg p4:p(V +), reg data3:*, reg data4:V, reg p5:p(V +), reg as_list:cls, reg match_call:cls, reg func2:*, reg func3:V, reg p6:p(V +), reg RHS6:*, reg RHS7:V, reg p7:p(V +), reg r29:V, reg p8:p(V +), reg r31:V, reg p9:p(V +), reg LHS:*, reg LHS1:V, reg p10:p(V +), reg ddd1:dots?, reg r34:V, reg p11:p(V +), reg r36:V |
    mkenv;
    st object = object;
    st data = data;
    st `...` = ddd;
    ____ = ldf `%||%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      attr = ldf attr in base;
      r2 = dyn attr(data2, "parameters");
      goto L0(r2);
    L2():
      r = dyn base(<sym data>, "parameters");
      goto L0(r);
    };
    p11 = prom<V +>{
      sym1 = ldf length;
      base1 = ldf length in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L10() else L11();
    L0(r5):
      st len = r5;
      len = ld len;
      len1 = force? len;
      checkMissing(len1);
      r7 = `==`(len1, 1);
      c = `as.logical`(r7);
      if c then L12() else L1();
    L10():
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      length = ldf length in base;
      r6 = dyn length(object2);
      goto L0(r6);
    L11():
      r4 = dyn base1(<sym object>);
      goto L0(r4);
    L1():
      goto L2();
    L2():
      len2 = ld len;
      len3 = force? len2;
      checkMissing(len3);
      r10 = `==`(len3, 3);
      c1 = `as.logical`(r10);
      if c1 then L14() else L3();
    L12():
      stop = ldf stop;
      r8 = dyn stop("argument 'object' has an impossible length");
      goto L2();
    L3():
      goto L5(NULL);
    L5(dx2):
      st LHS = dx2;
      object7 = ld object;
      object8 = force? object7;
      checkMissing(object8);
      c3 = `is.object`(object8);
      if c3 then L19() else L20(object8);
    L14():
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      c2 = `is.object`(object4);
      if c2 then L15() else L16(object4);
    L4(dx1):
      goto L5(dx1);
    L6(dx4):
      st RHS = dx4;
      sym2 = ldf `is.call`;
      base2 = ldf `is.call` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L22() else L23();
    L15():
      dr = tryDispatchBuiltin.1("[[", object4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L17() else L16(dr);
    L16(object6):
      __ = ldf `[[` in base;
      r11 = dyn __(object6, 2);
      goto L4(r11);
    L19():
      dr2 = tryDispatchBuiltin.1("[[", object8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L21() else L20(dr2);
    L20(object10):
      len4 = ld len;
      len5 = force? len4;
      __1 = ldf `[[` in base;
      r12 = dyn __1(object10, len5);
      goto L6(r12);
    L7(r14):
      r16 = `!`(r14);
      c4 = `as.logical`(r16);
      if c4 then L24() else L8();
    L17():
      dx = getTryDispatchBuiltinValue(dr);
      goto L4(dx);
    L21():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L6(dx3);
    L22():
      RHS = ld RHS;
      RHS1 = force? RHS;
      checkMissing(RHS1);
      is_call = ldf `is.call` in base;
      r15 = dyn is_call(RHS1);
      goto L7(r15);
    L23():
      r13 = dyn base2(<sym RHS>);
      goto L7(r13);
    L8():
      goto L9();
    L9():
      eval = ldf eval;
      p1 = prom<V +>{
        RHS2 = ld RHS;
        RHS3 = force? RHS2;
        checkMissing(RHS3);
        c5 = `is.object`(RHS3);
        if c5 then L1() else L2(RHS3);
      L0(dx6):
        return dx6;
      L1():
        dr4 = tryDispatchBuiltin.1("[[", RHS3);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(RHS5):
        __2 = ldf `[[` in base;
        r19 = dyn __2(RHS5, 1);
        goto L0(r19);
      L3():
        dx5 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx5);
      };
      p3 = prom<V +>{
        environment = ldf environment;
        p2 = prom<V +>{
          object11 = ld object;
          object12 = force? object11;
          checkMissing(object12);
          return object12;
        };
        r22 = dyn environment(p2);
        return r22;
      };
      r24 = dyn eval(p1, p3);
      st func = r24;
      getInitial = ldf getInitial;
      p4 = prom<V +>{
        func = ld func;
        func1 = force? func;
        checkMissing(func1);
        return func1;
      };
      p5 = prom<V +>{
        data3 = ld data;
        data4 = force? data3;
        checkMissing(data4);
        return data4;
      };
      p9 = prom<V +>{
        as_list = ldf `as.list`;
        p8 = prom<V +>{
          match_call = ldf `match.call`;
          p6 = prom<V +>{
            func2 = ld func;
            func3 = force? func2;
            checkMissing(func3);
            return func3;
          };
          p7 = prom<V +>{
            RHS6 = ld RHS;
            RHS7 = force? RHS6;
            checkMissing(RHS7);
            return RHS7;
          };
          r29 = dyn match_call[, call](p6, p7);
          return r29;
        };
        r31 = dyn as_list(p8);
        return r31;
      };
      p10 = prom<V +>{
        LHS = ld LHS;
        LHS1 = force? LHS;
        checkMissing(LHS1);
        return LHS1;
      };
      ddd1 = ld `...`;
      r34 = dyn getInitial[, , mCall, LHS, `...`](p4, p5, p9, p10, ddd1);
      return r34;
    L24():
      stop1 = ldf stop;
      r17 = dyn stop1("right-hand side of formula is not a call");
      goto L9();
    };
    r36 = dyn ____(p, p11);
    check L1() else D1();
  D1():
    deopt 4 [r36];
  L1():
    popenv;
    return r36;
  }
}