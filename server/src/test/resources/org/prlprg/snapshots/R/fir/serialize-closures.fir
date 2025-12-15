fun main() {
  () -+> V { reg commandArgs:cls, reg r:V, reg _args:*, reg _args1:V, reg c:L, reg _args3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r1:V, reg _args4:*, reg _args5:V, reg c1:L, reg _args7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r2:V, reg source:cls, reg _source:*, reg _source1:V, reg p:p(V +), reg r4:V, reg dir_create:cls, reg _target:*, reg _target1:V, reg p1:p(V +), reg r6:V, reg ls:cls, reg r7:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg i7:I, reg r9:V, reg get:cls, reg _name:*, reg _name1:V, reg p2:p(V +), reg r11:V, reg is_function:cls, reg r12:V, reg c3:L, reg get1:cls, reg _name2:*, reg _name3:V, reg p3:p(V +), reg r14:V, reg print:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg _func:*, reg _func1:V, reg attributes:cls, reg r17:V, reg p4:p(V +), reg r19:V, reg saveRDS:cls, reg _func2:*, reg _func3:V, reg p5:p(V +), reg file_path:cls, reg _target2:*, reg _target3:V, reg p6:p(V +), reg paste0:cls, reg _name4:*, reg _name5:V, reg p7:p(V +), reg r23:V, reg p8:p(V +), reg r25:V, reg p9:p(V +), reg r27:V, reg saveRDS1:cls, reg __2:cls, reg r28:V, reg r29:cls, reg _func4:*, reg _func5:V, reg p10:p(V +), reg r31:V, reg p11:p(V +), reg file_path1:cls, reg _target4:*, reg _target5:V, reg p12:p(V +), reg paste1:cls, reg _name6:*, reg _name7:V, reg p13:p(V +), reg r35:V, reg p14:p(V +), reg r37:V, reg p15:p(V +), reg r39:V, reg i10:I |
    mkenv;
    commandArgs = ldf commandArgs;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    r = dyn commandArgs[trailingOnly](TRUE);
    check L8() else D1();
  D1():
    deopt 4 [r];
  L8():
    st `.args` = r;
    _args = ld `.args`;
    check L9() else D2();
  D2():
    deopt 6 [_args];
  L9():
    _args1 = force? _args;
    checkMissing(_args1);
    c = `is.object`(_args1);
    if c then L10() else L11(_args1);
  L0(dx1):
    st `.source` = dx1;
    _args4 = ld `.args`;
    check L13() else D3();
  L10():
    dr = tryDispatchBuiltin.1("[", _args1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(_args3):
    __ = ldf `[` in base;
    r1 = dyn __(_args3, 1.0);
    goto L0(r1);
  D3():
    deopt 12 [_args4];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L13():
    _args5 = force? _args4;
    checkMissing(_args5);
    c1 = `is.object`(_args5);
    if c1 then L14() else L15(_args5);
  L1(dx3):
    st `.target` = dx3;
    source = ldf source;
    check L17() else D4();
  L14():
    dr2 = tryDispatchBuiltin.1("[", _args5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L16() else L15(dr2);
  L15(_args7):
    __1 = ldf `[` in base;
    r2 = dyn __1(_args7, 2.0);
    goto L1(r2);
  D4():
    deopt 19 [];
  L16():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx2);
  L17():
    p = prom<V +>{
      _source = ld `.source`;
      _source1 = force? _source;
      checkMissing(_source1);
      return _source1;
    };
    r4 = dyn source[, chdir, `keep.source`](p, TRUE, TRUE);
    check L18() else D5();
  D5():
    deopt 25 [r4];
  L18():
    dir_create = ldf `dir.create`;
    check L19() else D6();
  D6():
    deopt 27 [];
  L19():
    p1 = prom<V +>{
      _target = ld `.target`;
      _target1 = force? _target;
      checkMissing(_target1);
      return _target1;
    };
    r6 = dyn dir_create(p1);
    check L20() else D7();
  D7():
    deopt 29 [r6];
  L20():
    ls = ldf ls;
    check L21() else D8();
  D8():
    deopt 31 [];
  L21():
    r7 = dyn ls();
    check L22() else D9();
  D9():
    deopt 32 [r7];
  L22():
    s = toForSeq(r7);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L23() else L6();
  L6():
    x = `[[`(s, i2, NULL, TRUE);
    st `.name` = x;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L23():
    invisible.0();
    popenv;
    return i2;
  L3(i7, r9):
    c3 = `as.logical`(r9);
    if c3 then L29() else L4();
  L24():
    get = ldf get;
    check L26() else D10();
  L25():
    r8 = dyn base(<lang get(.name)>);
    goto L3(i2, r8);
  D10():
    deopt 36 [i2];
  L4():
    goto L5(i7);
  L5(i10):
    goto L2(i10);
  L26():
    p2 = prom<V +>{
      _name = ld `.name`;
      _name1 = force? _name;
      checkMissing(_name1);
      return _name1;
    };
    r11 = dyn get(p2);
    check L27() else D11();
  L29():
    get1 = ldf get;
    check L30() else D13();
  D11():
    deopt 38 [i2, r11];
  D13():
    deopt 42 [i7];
  L27():
    is_function = ldf `is.function` in base;
    r12 = dyn is_function(r11);
    check L28() else D12();
  L30():
    p3 = prom<V +>{
      _name2 = ld `.name`;
      _name3 = force? _name2;
      checkMissing(_name3);
      return _name3;
    };
    r14 = dyn get1(p3);
    check L31() else D14();
  D12():
    deopt 40 [i2, r12];
  D14():
    deopt 44 [i7, r14];
  L28():
    goto L3(i2, r12);
  L31():
    st `.func` = r14;
    print = ldf print;
    check L32() else D15();
  D15():
    deopt 47 [i7];
  L32():
    p4 = prom<V +>{
      sym1 = ldf attributes;
      base1 = ldf attributes in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      _func = ld `.func`;
      _func1 = force? _func;
      checkMissing(_func1);
      attributes = ldf attributes in base;
      r17 = dyn attributes(_func1);
      goto L0(r17);
    L2():
      r15 = dyn base1(<sym .func>);
      goto L0(r15);
    };
    r19 = dyn print(p4);
    check L33() else D16();
  D16():
    deopt 49 [i7, r19];
  L33():
    saveRDS = ldf saveRDS;
    check L34() else D17();
  D17():
    deopt 51 [i7];
  L34():
    p5 = prom<V +>{
      _func2 = ld `.func`;
      _func3 = force? _func2;
      checkMissing(_func3);
      return _func3;
    };
    p9 = prom<V +>{
      file_path = ldf `file.path`;
      p6 = prom<V +>{
        _target2 = ld `.target`;
        _target3 = force? _target2;
        checkMissing(_target3);
        return _target3;
      };
      p8 = prom<V +>{
        paste0 = ldf paste0;
        p7 = prom<V +>{
          _name4 = ld `.name`;
          _name5 = force? _name4;
          checkMissing(_name5);
          return _name5;
        };
        r23 = dyn paste0(p7, ".ast.rds");
        return r23;
      };
      r25 = dyn file_path(p6, p8);
      return r25;
    };
    r27 = dyn saveRDS[, compress, file](p5, FALSE, p9);
    check L35() else D18();
  D18():
    deopt 57 [i7, r27];
  L35():
    saveRDS1 = ldf saveRDS;
    check L36() else D19();
  D19():
    deopt 59 [i7];
  L36():
    p11 = prom<V +>{
      __2 = ldf `::`;
      r28 = dyn __2("compiler", "cmpfun");
      checkFun.0(r28);
      r29 = r28 as cls;
      p10 = prom<V +>{
        _func4 = ld `.func`;
        _func5 = force? _func4;
        checkMissing(_func5);
        return _func5;
      };
      r31 = dyn r29(p10);
      return r31;
    };
    p15 = prom<V +>{
      file_path1 = ldf `file.path`;
      p12 = prom<V +>{
        _target4 = ld `.target`;
        _target5 = force? _target4;
        checkMissing(_target5);
        return _target5;
      };
      p14 = prom<V +>{
        paste1 = ldf paste0;
        p13 = prom<V +>{
          _name6 = ld `.name`;
          _name7 = force? _name6;
          checkMissing(_name7);
          return _name7;
        };
        r35 = dyn paste1(p13, ".bc.rds");
        return r35;
      };
      r37 = dyn file_path1(p12, p14);
      return r37;
    };
    r39 = dyn saveRDS1[, compress, file](p11, FALSE, p15);
    check L37() else D20();
  D20():
    deopt 65 [i7, r39];
  L37():
    goto L5(i7);
  }
}