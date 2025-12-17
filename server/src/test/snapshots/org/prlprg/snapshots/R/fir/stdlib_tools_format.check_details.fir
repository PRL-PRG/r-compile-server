fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_details` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg paste0:cls, reg sprintf:cls, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r2:V, reg p:p(V +), reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r4:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg ifelse:cls, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg flavor:*, reg flavor1:V, reg nzchar:cls, reg r10:V, reg p3:p(V +), reg sprintf1:cls, reg flavor2:*, reg flavor3:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg ifelse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg flags:*, reg flags1:V, reg nzchar1:cls, reg r19:V, reg p7:p(V +), reg sprintf2:cls, reg flags2:*, reg flags3:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg r24:V, reg p10:p(V +), reg sprintf3:cls, reg x17:*, reg x18:V, reg c4:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r26:V, reg p11:p(V +), reg x21:*, reg x22:V, reg c5:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r28:V, reg p12:p(V +), reg r30:V, reg p13:p(V +), reg sprintf4:cls, reg gsub:cls, reg x25:*, reg x26:V, reg c6:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r32:V, reg p14:p(V +), reg r34:V, reg p15:p(V +), reg r36:V, reg p16:p(V +), reg r38:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    x1 = ld x;
    check L0() else D0();
  D0():
    deopt 0 [x1];
  L0():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L1(dx1):
    st flags = dx1;
    x5 = ld x;
    check L5() else D1();
  L2():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    r = `$`(x4, <sym Flags>);
    goto L1(r);
  D1():
    deopt 4 [x5];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L5():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L7() else L8(x6);
  L6(dx3):
    st flavor = dx3;
    paste0 = ldf paste0;
    check L10() else D2();
  L7():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(dr2);
  L8(x8):
    r1 = `$`(x8, <sym Flavor>);
    goto L6(r1);
  D2():
    deopt 9 [];
  L9():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L10():
    p2 = prom<V +>{
      sprintf = ldf sprintf;
      p = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c2 = `is.object`(x10);
        if c2 then L1() else L2(x10);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x12):
        r2 = `$`(x12, <sym Package>);
        goto L0(r2);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p1 = prom<V +>{
        x13 = ld x;
        x14 = force? x13;
        checkMissing(x14);
        c3 = `is.object`(x14);
        if c3 then L1() else L2(x14);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("$", x14);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x16):
        r4 = `$`(x16, <sym Version>);
        goto L0(r4);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r6 = dyn sprintf("Package: %s %s\n", p, p1);
      return r6;
    };
    p6 = prom<V +>{
      ifelse = ldf ifelse;
      p3 = prom<V +>{
        sym = ldf nzchar;
        base = ldf nzchar in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r9):
        return r9;
      L1():
        flavor = ld flavor;
        flavor1 = force? flavor;
        checkMissing(flavor1);
        nzchar = ldf nzchar in base;
        r10 = dyn nzchar(flavor1);
        goto L0(r10);
      L2():
        r8 = dyn base(<sym flavor>);
        goto L0(r8);
      };
      p5 = prom<V +>{
        sprintf1 = ldf sprintf;
        p4 = prom<V +>{
          flavor2 = ld flavor;
          flavor3 = force? flavor2;
          checkMissing(flavor3);
          return flavor3;
        };
        r13 = dyn sprintf1("Flavor: %s\n", p4);
        return r13;
      };
      r15 = dyn ifelse(p3, p5, "");
      return r15;
    };
    p10 = prom<V +>{
      ifelse1 = ldf ifelse;
      p7 = prom<V +>{
        sym1 = ldf nzchar;
        base1 = ldf nzchar in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r18):
        return r18;
      L1():
        flags = ld flags;
        flags1 = force? flags;
        checkMissing(flags1);
        nzchar1 = ldf nzchar in base;
        r19 = dyn nzchar1(flags1);
        goto L0(r19);
      L2():
        r17 = dyn base1(<sym flags>);
        goto L0(r17);
      };
      p9 = prom<V +>{
        sprintf2 = ldf sprintf;
        p8 = prom<V +>{
          flags2 = ld flags;
          flags3 = force? flags2;
          checkMissing(flags3);
          return flags3;
        };
        r22 = dyn sprintf2("Flags: %s\n", p8);
        return r22;
      };
      r24 = dyn ifelse1(p7, p9, "");
      return r24;
    };
    p13 = prom<V +>{
      sprintf3 = ldf sprintf;
      p11 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        c4 = `is.object`(x18);
        if c4 then L1() else L2(x18);
      L0(dx9):
        return dx9;
      L1():
        dr8 = tryDispatchBuiltin.1("$", x18);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(x20):
        r26 = `$`(x20, <sym Check>);
        goto L0(r26);
      L3():
        dx8 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx8);
      };
      p12 = prom<V +>{
        x21 = ld x;
        x22 = force? x21;
        checkMissing(x22);
        c5 = `is.object`(x22);
        if c5 then L1() else L2(x22);
      L0(dx11):
        return dx11;
      L1():
        dr10 = tryDispatchBuiltin.1("$", x22);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(x24):
        r28 = `$`(x24, <sym Status>);
        goto L0(r28);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx10);
      };
      r30 = dyn sprintf3("Check: %s, Result: %s\n", p11, p12);
      return r30;
    };
    p16 = prom<V +>{
      sprintf4 = ldf sprintf;
      p15 = prom<V +>{
        gsub = ldf gsub;
        p14 = prom<V +>{
          x25 = ld x;
          x26 = force? x25;
          checkMissing(x26);
          c6 = `is.object`(x26);
          if c6 then L1() else L2(x26);
        L0(dx13):
          return dx13;
        L1():
          dr12 = tryDispatchBuiltin.1("$", x26);
          dc6 = getTryDispatchBuiltinDispatched(dr12);
          if dc6 then L3() else L2(dr12);
        L2(x28):
          r32 = `$`(x28, <sym Output>);
          goto L0(r32);
        L3():
          dx12 = getTryDispatchBuiltinValue(dr12);
          goto L0(dx12);
        };
        r34 = dyn gsub[, , , perl]("\n", "\n  ", p14, TRUE);
        return r34;
      };
      r36 = dyn sprintf4("  %s", p15);
      return r36;
    };
    r38 = dyn paste0(p2, p6, p10, p13, p16);
    check L11() else D3();
  D3():
    deopt 15 [r38];
  L11():
    popenv;
    return r38;
  }
}