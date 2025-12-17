fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1090232305;
    st packageNotFoundError = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1090232305(package, `lib.loc`, call) {
  (reg package:*, reg lib_loc:*, reg call:*) -+> V { var package:*, var `lib.loc`:*, var call:*, reg call_isMissing:L, reg call_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg package1:*, reg package2:V, reg length:cls, reg r2:V, reg r3:V, reg c:L, reg gettextf:cls, reg sQuote:cls, reg package3:*, reg package4:V, reg p:p(V +), reg r5:V, reg p1:p(V +), reg r7:V, reg paste0:cls, reg ngettext:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg package5:*, reg package6:V, reg length1:cls, reg r11:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg paste1:cls, reg sQuote1:cls, reg package7:*, reg package8:V, reg p4:p(V +), reg r16:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg r20:V, reg errorCondition:cls, reg msg:*, reg msg1:V, reg p7:p(V +), reg package9:*, reg package10:V, reg p8:p(V +), reg lib_loc1:*, reg lib_loc2:V, reg p9:p(V +), reg call1:*, reg call2:V, reg p10:p(V +), reg r25:V |
    mkenv;
    st package = package;
    st `lib.loc` = lib_loc;
    call_isMissing = missing.0(call);
    if call_isMissing then L0(NULL) else L0(call);
  L0(call_orDefault):
    st call = call_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L1(r1):
    r3 = `==`(r1, 1);
    c = `as.logical`(r3);
    if c then L8() else L2();
  L4():
    package1 = ld package;
    check L6() else D0();
  L5():
    r = dyn base(<sym package>);
    goto L1(r);
  D0():
    deopt 2 [package1];
  L2():
    paste0 = ldf paste0;
    check L12() else D4();
  L3():
    errorCondition = ldf errorCondition;
    check L14() else D6();
  L6():
    package2 = force? package1;
    checkMissing(package2);
    length = ldf length in base;
    r2 = dyn length(package2);
    check L7() else D1();
  L8():
    gettextf = ldf gettextf;
    check L9() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [];
  D4():
    deopt 15 [];
  D6():
    deopt 22 [];
  L7():
    goto L1(r2);
  L9():
    p1 = prom<V +>{
      sQuote = ldf sQuote;
      p = prom<V +>{
        package3 = ld package;
        package4 = force? package3;
        checkMissing(package4);
        return package4;
      };
      r5 = dyn sQuote(p);
      return r5;
    };
    r7 = dyn gettextf("there is no package called %s", p1);
    check L10() else D3();
  L12():
    p3 = prom<V +>{
      ngettext = ldf ngettext;
      p2 = prom<V +>{
        sym1 = ldf length;
        base1 = ldf length in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r10):
        return r10;
      L1():
        package5 = ld package;
        package6 = force? package5;
        checkMissing(package6);
        length1 = ldf length in base;
        r11 = dyn length1(package6);
        goto L0(r11);
      L2():
        r9 = dyn base1(<sym package>);
        goto L0(r9);
      };
      r13 = dyn ngettext(p2, "there is no package called", "there are no packages called");
      return r13;
    };
    p6 = prom<V +>{
      paste1 = ldf paste;
      p5 = prom<V +>{
        sQuote1 = ldf sQuote;
        p4 = prom<V +>{
          package7 = ld package;
          package8 = force? package7;
          checkMissing(package8);
          return package8;
        };
        r16 = dyn sQuote1(p4);
        return r16;
      };
      r18 = dyn paste1[, collapse](p5, ", ");
      return r18;
    };
    r20 = dyn paste0(p3, " ", p6);
    check L13() else D5();
  L14():
    p7 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    p8 = prom<V +>{
      package9 = ld package;
      package10 = force? package9;
      checkMissing(package10);
      return package10;
    };
    p9 = prom<V +>{
      lib_loc1 = ld `lib.loc`;
      lib_loc2 = force? lib_loc1;
      checkMissing(lib_loc2);
      return lib_loc2;
    };
    p10 = prom<V +>{
      call1 = ld call;
      call2 = force? call1;
      checkMissing(call2);
      return call2;
    };
    r25 = dyn errorCondition[, package, `lib.loc`, call, class](p7, p8, p9, p10, "packageNotFoundError");
    check L15() else D7();
  D3():
    deopt 12 [r7];
  D5():
    deopt 19 [r20];
  D7():
    deopt 32 [r25];
  L10():
    st msg = r7;
    goto L3();
  L13():
    st msg = r20;
    goto L3();
  L15():
    popenv;
    return r25;
  }
}