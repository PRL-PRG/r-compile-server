fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg autoload:cls, reg r5:V, reg search:cls, reg r6:V, reg ls:cls, reg r7:V, reg _Autoloaded:*, reg _Autoloaded1:V, reg sort:cls, reg __:cls, reg r8:V, reg r9:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg x:*, reg x1:V, reg r13:V, reg interpSpline:cls, reg x2:*, reg x3:V, reg p2:p(V +), reg y:*, reg y1:V, reg p3:p(V +), reg r16:V, reg search1:cls, reg r17:V, reg detach:cls, reg r18:V, reg search2:cls, reg r19:V, reg interpSpline1:cls, reg x4:*, reg x5:V, reg p4:p(V +), reg y2:*, reg y3:V, reg x6:*, reg x7:V, reg r21:V, reg p5:p(V +), reg r23:V, reg search3:cls, reg r24:V, reg detach1:cls, reg r25:V |
    mkenv;
    r = clos inner1780789373;
    st autoload = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    autoload = ldf autoload;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    r5 = dyn autoload("interpSpline", "splines");
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 12 [r5];
  L4():
    goto L0();
  L6():
    search = ldf search;
    check L7() else D4();
  D4():
    deopt 14 [];
  L7():
    r6 = dyn search();
    check L8() else D5();
  D5():
    deopt 15 [r6];
  L8():
    ls = ldf ls;
    check L9() else D6();
  D6():
    deopt 17 [];
  L9():
    r7 = dyn ls("Autoloads");
    check L10() else D7();
  D7():
    deopt 19 [r7];
  L10():
    _Autoloaded = ld `.Autoloaded`;
    check L11() else D8();
  D8():
    deopt 20 [_Autoloaded];
  L11():
    _Autoloaded1 = force? _Autoloaded;
    checkMissing(_Autoloaded1);
    sort = ldf sort;
    check L12() else D9();
  D9():
    deopt 23 [];
  L12():
    p1 = prom<V +>{
      __ = ldf `::`;
      r8 = dyn __("stats", "rnorm");
      checkFun.0(r8);
      r9 = r8 as cls;
      r10 = dyn r9(12.0);
      return r10;
    };
    r12 = dyn sort(p1);
    check L13() else D10();
  D10():
    deopt 25 [r12];
  L13():
    st x = r12;
    x = ld x;
    check L14() else D11();
  D11():
    deopt 27 [x];
  L14():
    x1 = force? x;
    checkMissing(x1);
    r13 = `^`(x1, 2.0);
    st y = r13;
    interpSpline = ldf interpSpline;
    check L15() else D12();
  D12():
    deopt 33 [];
  L15():
    p2 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p3 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    r16 = dyn interpSpline(p2, p3);
    check L16() else D13();
  D13():
    deopt 36 [r16];
  L16():
    st is = r16;
    search1 = ldf search;
    check L17() else D14();
  D14():
    deopt 39 [];
  L17():
    r17 = dyn search1();
    check L18() else D15();
  D15():
    deopt 40 [r17];
  L18():
    detach = ldf detach;
    check L19() else D16();
  D16():
    deopt 42 [];
  L19():
    r18 = dyn detach("package:splines");
    check L20() else D17();
  D17():
    deopt 44 [r18];
  L20():
    search2 = ldf search;
    check L21() else D18();
  D18():
    deopt 46 [];
  L21():
    r19 = dyn search2();
    check L22() else D19();
  D19():
    deopt 47 [r19];
  L22():
    interpSpline1 = ldf interpSpline;
    check L23() else D20();
  D20():
    deopt 49 [];
  L23():
    p4 = prom<V +>{
      x4 = ld x;
      x5 = force? x4;
      checkMissing(x5);
      return x5;
    };
    p5 = prom<V +>{
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      x6 = ld x;
      x7 = force? x6;
      checkMissing(x7);
      r21 = `+`(y3, x7);
      return r21;
    };
    r23 = dyn interpSpline1(p4, p5);
    check L24() else D21();
  D21():
    deopt 52 [r23];
  L24():
    st is2 = r23;
    search3 = ldf search;
    check L25() else D22();
  D22():
    deopt 55 [];
  L25():
    r24 = dyn search3();
    check L26() else D23();
  D23():
    deopt 56 [r24];
  L26():
    detach1 = ldf detach;
    check L27() else D24();
  D24():
    deopt 58 [];
  L27():
    r25 = dyn detach1("package:splines");
    check L28() else D25();
  D25():
    deopt 60 [r25];
  L28():
    popenv;
    return r25;
  }
}
fun inner1780789373(name, package, reset, `...`) {
  (reg name:*, reg package:*, reg reset:*, reg ddd:dots) -+> V { var name:*, var package:*, var reset:*, reg reset_isMissing:L, reg reset_orDefault:*, var `...`:dots?, reg reset1:*, reg reset2:V, reg r:V, reg c:L, reg c2:V, reg exists:cls, reg name1:*, reg name2:V, reg p:p(V +), reg _GlobalEnv:*, reg _GlobalEnv1:V, reg p1:p(V +), reg r3:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r4:V, reg match_call:cls, reg r6:V, reg as_name:cls, reg r7:V, reg l:*, reg c7:L, reg r9:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r12:V, reg eval:cls, reg m:*, reg m1:V, reg p2:p(V +), reg parent_frame:cls, reg r14:V, reg p3:p(V +), reg r16:V, reg sym:cls, reg base:cls, reg guard:L, reg r17:V, reg r18:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r19:V, reg r20:V, reg as_name1:cls, reg r21:V, reg newcall:*, reg newcall1:V, reg c8:cls, reg r22:V, reg as_call:cls, reg r23:V, reg l3:*, reg c9:L, reg r25:dots, reg l5:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg package1:*, reg package2:V, reg _Autoloaded:*, reg _Autoloaded1:V, reg match:cls, reg r33:V, reg is_na:cls, reg r34:V, reg c10:L, reg assign:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg package3:*, reg package4:V, reg _Autoloaded2:*, reg _Autoloaded3:V, reg c11:cls, reg r37:V, reg p4:p(V +), reg _AutoloadEnv:*, reg _AutoloadEnv1:V, reg p5:p(V +), reg r40:V, reg do_call:cls, reg delayedAssign:*, reg delayedAssign1:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg name3:*, reg name4:V, reg newcall2:*, reg newcall3:V, reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg _AutoloadEnv2:*, reg _AutoloadEnv3:V, reg list:cls, reg r45:V, reg p7:p(V +), reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r48:V, reg r49:V, reg invisible:cls, reg r50:V |
    mkenv;
    st name = name;
    st package = package;
    reset_isMissing = missing.0(reset);
    if reset_isMissing then L0(FALSE) else L0(reset);
  L0(reset_orDefault):
    st reset = reset_orDefault;
    st `...` = ddd;
    reset1 = ld reset;
    check L12() else D0();
  D0():
    deopt 0 [reset1];
  L12():
    reset2 = force? reset1;
    checkMissing(reset2);
    r = `!`(reset2);
    c = `as.logical`(r);
    if c then L13() else L1(c);
  L1(c2):
    c6 = `as.logical`(c2);
    if c6 then L17() else L2();
  L13():
    exists = ldf exists;
    check L14() else D1();
  D1():
    deopt 4 [c];
  L2():
    goto L3();
  L3():
    match_call = ldf `match.call`;
    check L21() else D5();
  L14():
    p = prom<V +>{
      name1 = ld name;
      name2 = force? name1;
      checkMissing(name2);
      return name2;
    };
    p1 = prom<V +>{
      _GlobalEnv = ld `.GlobalEnv`;
      _GlobalEnv1 = force? _GlobalEnv;
      checkMissing(_GlobalEnv1);
      return _GlobalEnv1;
    };
    r3 = dyn exists[, envir, inherits](p, p1, FALSE);
    check L15() else D2();
  L17():
    stop = ldf stop;
    check L18() else D3();
  D2():
    deopt 10 [c, r3];
  D3():
    deopt 13 [];
  D5():
    deopt 19 [];
  L15():
    c3 = `as.logical`(r3);
    c4 = `&&`(c, c3);
    goto L1(c4);
  L18():
    r4 = dyn stop("an object with that name already exists");
    check L19() else D4();
  L21():
    r6 = dyn match_call();
    check L22() else D6();
  D4():
    deopt 15 [r4];
  D6():
    deopt 20 [r6];
  L19():
    goto L3();
  L22():
    st m = r6;
    as_name = ldf `as.name`;
    check L23() else D7();
  D7():
    deopt 23 [];
  L23():
    r7 = dyn as_name("list");
    check L24() else D8();
  D8():
    deopt 25 [r7];
  L24():
    l = ld m;
    c7 = `is.object`(l);
    if c7 then L25() else L26(r7, l);
  L4(dx1):
    st m = dx1;
    eval = ldf eval;
    check L28() else D9();
  L25():
    dr = tryDispatchBuiltin.0("[[<-", l, r7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(r7, dr);
  L26(r9, l2):
    ____ = ldf `[[<-` in base;
    r12 = dyn ____(l2, r7, 1);
    goto L4(r12);
  D9():
    deopt 32 [];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L28():
    p2 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p3 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r14 = dyn parent_frame();
      return r14;
    };
    r16 = dyn eval(p2, p3);
    check L29() else D10();
  D10():
    deopt 35 [r16];
  L29():
    st newcall = r16;
    sym = ldf `as.call`;
    base = ldf `as.call` in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L5(r18):
    st newcall = r18;
    l3 = ld newcall;
    c9 = `is.object`(l3);
    if c9 then L40() else L41(NULL, l3);
  L30():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L32() else L33();
  L31():
    r17 = dyn base(<lang c(as.name("autoloader"), newcall)>);
    goto L5(r17);
  L6(r20):
    as_call = ldf `as.call` in base;
    r23 = dyn as_call(r20);
    check L38() else D15();
  L32():
    as_name1 = ldf `as.name`;
    check L34() else D11();
  L33():
    r19 = dyn base1(<lang as.name("autoloader")>, <sym newcall>);
    goto L6(r19);
  L39(dx3):
    st newcall = dx3;
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L40():
    dr2 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(NULL, dr2);
  L41(r25, l5):
    r28 = `$<-`(l5, <sym reset>, NULL);
    goto L39(r28);
  D11():
    deopt 42 [];
  D15():
    deopt 50 [r23];
  L7(r30):
    c10 = `as.logical`(r30);
    if c10 then L51() else L9();
  L34():
    r21 = dyn as_name1("autoloader");
    check L35() else D12();
  L38():
    goto L5(r23);
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(dx2);
  L43():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L44():
    r29 = dyn base2(<lang match(package, .Autoloaded)>);
    goto L7(r29);
  D12():
    deopt 44 [r21];
  L8(r32):
    is_na = ldf `is.na` in base;
    r34 = dyn is_na(r32);
    check L50() else D19();
  L9():
    goto L10();
  L10():
    do_call = ldf `do.call`;
    check L55() else D22();
  L35():
    newcall = ld newcall;
    check L36() else D13();
  L45():
    package1 = ld package;
    check L47() else D16();
  L46():
    r31 = dyn base3(<sym package>, <sym .Autoloaded>);
    goto L8(r31);
  L51():
    assign = ldf assign;
    check L52() else D20();
  D13():
    deopt 45 [newcall];
  D16():
    deopt 61 [package1];
  D19():
    deopt 70 [r34];
  D20():
    deopt 72 [];
  D22():
    deopt 81 [];
  L36():
    newcall1 = force? newcall;
    checkMissing(newcall1);
    c8 = ldf c in base;
    r22 = dyn c8(r21, newcall1);
    check L37() else D14();
  L47():
    package2 = force? package1;
    checkMissing(package2);
    _Autoloaded = ld `.Autoloaded`;
    check L48() else D17();
  L50():
    goto L7(r34);
  L52():
    p4 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      package3 = ld package;
      package4 = force? package3;
      checkMissing(package4);
      _Autoloaded2 = ld `.Autoloaded`;
      _Autoloaded3 = force? _Autoloaded2;
      checkMissing(_Autoloaded3);
      c11 = ldf c in base;
      r37 = dyn c11(package4, _Autoloaded3);
      goto L0(r37);
    L2():
      r35 = dyn base4(<sym package>, <sym .Autoloaded>);
      goto L0(r35);
    };
    p5 = prom<V +>{
      _AutoloadEnv = ld `.AutoloadEnv`;
      _AutoloadEnv1 = force? _AutoloadEnv;
      checkMissing(_AutoloadEnv1);
      return _AutoloadEnv1;
    };
    r40 = dyn assign[, , envir](".Autoloaded", p4, p5);
    check L53() else D21();
  L55():
    p6 = prom<V +>{
      delayedAssign = ld delayedAssign;
      delayedAssign1 = force? delayedAssign;
      checkMissing(delayedAssign1);
      return delayedAssign1;
    };
    p7 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r44):
      return r44;
    L1():
      name3 = ld name;
      name4 = force? name3;
      checkMissing(name4);
      newcall2 = ld newcall;
      newcall3 = force? newcall2;
      checkMissing(newcall3);
      _GlobalEnv2 = ld `.GlobalEnv`;
      _GlobalEnv3 = force? _GlobalEnv2;
      checkMissing(_GlobalEnv3);
      _AutoloadEnv2 = ld `.AutoloadEnv`;
      _AutoloadEnv3 = force? _AutoloadEnv2;
      checkMissing(_AutoloadEnv3);
      list = ldf list in base;
      r45 = dyn list(name4, newcall3, _GlobalEnv3, _AutoloadEnv3);
      goto L0(r45);
    L2():
      r43 = dyn base5(<sym name>, <sym newcall>, <sym .GlobalEnv>, <sym .AutoloadEnv>);
      goto L0(r43);
    };
    r47 = dyn do_call(p6, p7);
    check L56() else D23();
  D14():
    deopt 48 [r22];
  D17():
    deopt 63 [_Autoloaded];
  D21():
    deopt 77 [r40];
  D23():
    deopt 84 [r47];
  L37():
    goto L6(r22);
  L48():
    _Autoloaded1 = force? _Autoloaded;
    checkMissing(_Autoloaded1);
    match = ldf match in base;
    r33 = dyn match(package2, _Autoloaded1, NA_INT, NULL);
    check L49() else D18();
  L53():
    goto L10();
  L56():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L57() else L58();
  D18():
    deopt 68 [r33];
  L11(r49):
    popenv;
    return r49;
  L49():
    goto L8(r33);
  L57():
    invisible = ldf invisible in base;
    r50 = dyn invisible();
    check L59() else D24();
  L58():
    r48 = dyn base6();
    goto L11(r48);
  D24():
    deopt 88 [r50];
  L59():
    goto L11(r50);
  }
}