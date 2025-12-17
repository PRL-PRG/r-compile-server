fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_details_changes` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg character:cls, reg r3:V, reg sprintf:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg x7:*, reg x8:V, reg c2:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg p2:p(V +), reg ifelse:cls, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:V, reg x11:*, reg x12:V, reg c3:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg nzchar:cls, reg r13:V, reg p3:p(V +), reg sprintf1:cls, reg old:*, reg old1:V, reg p4:p(V +), reg r16:V, reg p5:p(V +), reg r18:V, reg p6:p(V +), reg ifelse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg x15:*, reg x16:V, reg c4:L, reg x18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r22:V, reg nzchar1:cls, reg r23:V, reg p7:p(V +), reg sprintf2:cls, reg new:*, reg new1:V, reg p8:p(V +), reg r26:V, reg p9:p(V +), reg r28:V, reg p10:p(V +), reg r30:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    nrow = ldf nrow;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn nrow(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L4() else L0();
  L0():
    sprintf = ldf sprintf;
    check L9() else D4();
  L4():
    character = ldf character;
    check L5() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [];
  L5():
    r3 = dyn character();
    check L6() else D3();
  L9():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c1 = `is.object`(x4);
      if c1 then L1() else L2(x4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x6):
      r6 = `$`(x6, <sym Package>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      c2 = `is.object`(x8);
      if c2 then L1() else L2(x8);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x8);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x10):
      r8 = `$`(x10, <sym Check>);
      goto L0(r8);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      ifelse = ldf ifelse;
      p3 = prom<V +>{
        sym = ldf nzchar;
        base = ldf nzchar in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r11):
        return r11;
      L1():
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        c3 = `is.object`(x12);
        if c3 then L4() else L5(x12);
      L2():
        r10 = dyn base(<lang `<-`(old, `$`(x, Old))>);
        goto L0(r10);
      L3(dx5):
        st old = dx5;
        nzchar = ldf nzchar in base;
        r13 = dyn nzchar(dx5);
        goto L0(r13);
      L4():
        dr4 = tryDispatchBuiltin.1("$", x12);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L6() else L5(dr4);
      L5(x14):
        r12 = `$`(x14, <sym Old>);
        goto L3(r12);
      L6():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L3(dx4);
      };
      p5 = prom<V +>{
        sprintf1 = ldf sprintf;
        p4 = prom<V +>{
          old = ld old;
          old1 = force? old;
          checkMissing(old1);
          return old1;
        };
        r16 = dyn sprintf1("\nOld result: %s", p4);
        return r16;
      };
      r18 = dyn ifelse(p3, p5, "");
      return r18;
    };
    p10 = prom<V +>{
      ifelse1 = ldf ifelse;
      p7 = prom<V +>{
        sym1 = ldf nzchar;
        base1 = ldf nzchar in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r21):
        return r21;
      L1():
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        c4 = `is.object`(x16);
        if c4 then L4() else L5(x16);
      L2():
        r20 = dyn base1(<lang `<-`(new, `$`(x, New))>);
        goto L0(r20);
      L3(dx7):
        st new = dx7;
        nzchar1 = ldf nzchar in base;
        r23 = dyn nzchar1(dx7);
        goto L0(r23);
      L4():
        dr6 = tryDispatchBuiltin.1("$", x16);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L6() else L5(dr6);
      L5(x18):
        r22 = `$`(x18, <sym New>);
        goto L3(r22);
      L6():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L3(dx6);
      };
      p9 = prom<V +>{
        sprintf2 = ldf sprintf;
        p8 = prom<V +>{
          new = ld new;
          new1 = force? new;
          checkMissing(new1);
          return new1;
        };
        r26 = dyn sprintf2("\nNew result: %s", p8);
        return r26;
      };
      r28 = dyn ifelse1(p7, p9, "");
      return r28;
    };
    r30 = dyn sprintf("Package: %s\nCheck: %s%s%s", p1, p2, p6, p10);
    check L10() else D5();
  D3():
    deopt 7 [r3];
  D5():
    deopt 18 [r30];
  L6():
    popenv;
    return r3;
  L10():
    popenv;
    return r30;
  }
}