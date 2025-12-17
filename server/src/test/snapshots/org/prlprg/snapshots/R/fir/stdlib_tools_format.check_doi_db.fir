fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_doi_db` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg NROW:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg character:cls, reg r3:V, reg paste0:cls, reg sprintf:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), reg r8:V, reg p2:p(V +), reg sprintf1:cls, reg vapply:cls, reg x7:*, reg x8:V, reg c2:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg p3:p(V +), reg paste1:*, reg paste2:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg p6:p(V +), reg ifelse:cls, reg x11:*, reg x12:V, reg c3:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg r18:V, reg p7:p(V +), reg sprintf2:cls, reg s:*, reg s1:V, reg p8:p(V +), reg r21:V, reg p9:p(V +), reg r23:V, reg p10:p(V +), reg ifelse1:cls, reg x15:*, reg x16:V, reg c4:L, reg x18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r25:V, reg r26:V, reg p11:p(V +), reg sprintf3:cls, reg m:*, reg m1:V, reg p12:p(V +), reg r29:V, reg p13:p(V +), reg r31:V, reg p14:p(V +), reg r33:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    NROW = ldf NROW;
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
    r1 = dyn NROW(p);
    check L3() else D1();
  D1():
    deopt 3 [r1];
  L3():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L4() else L0();
  L0():
    paste0 = ldf paste0;
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
    p2 = prom<V +>{
      sprintf = ldf sprintf;
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
        r6 = `$`(x6, <sym DOI>);
        goto L0(r6);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r8 = dyn sprintf("DOI: %s", p1);
      return r8;
    };
    p6 = prom<V +>{
      sprintf1 = ldf sprintf;
      p5 = prom<V +>{
        vapply = ldf vapply;
        p3 = prom<V +>{
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
          r10 = `$`(x10, <sym From>);
          goto L0(r10);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        p4 = prom<V +>{
          paste1 = ld paste;
          paste2 = force? paste1;
          checkMissing(paste2);
          return paste2;
        };
        r13 = dyn vapply[, , , collapse](p3, p4, "", "\n      ");
        return r13;
      };
      r15 = dyn sprintf1("\nFrom: %s", p5);
      return r15;
    };
    p10 = prom<V +>{
      ifelse = ldf ifelse;
      p7 = prom<V +>{
        x11 = ld x;
        x12 = force? x11;
        checkMissing(x12);
        c3 = `is.object`(x12);
        if c3 then L1() else L2(x12);
      L0(dx5):
        st s = dx5;
        r18 = `==`(dx5, "");
        return r18;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x12);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x14):
        r17 = `$`(x14, <sym Status>);
        goto L0(r17);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p9 = prom<V +>{
        sprintf2 = ldf sprintf;
        p8 = prom<V +>{
          s = ld s;
          s1 = force? s;
          checkMissing(s1);
          return s1;
        };
        r21 = dyn sprintf2("\nStatus: %s", p8);
        return r21;
      };
      r23 = dyn ifelse(p7, "", p9);
      return r23;
    };
    p14 = prom<V +>{
      ifelse1 = ldf ifelse;
      p11 = prom<V +>{
        x15 = ld x;
        x16 = force? x15;
        checkMissing(x16);
        c4 = `is.object`(x16);
        if c4 then L1() else L2(x16);
      L0(dx7):
        st m = dx7;
        r26 = `==`(dx7, "");
        return r26;
      L1():
        dr6 = tryDispatchBuiltin.1("$", x16);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(x18):
        r25 = `$`(x18, <sym Message>);
        goto L0(r25);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      p13 = prom<V +>{
        sprintf3 = ldf sprintf;
        p12 = prom<V +>{
          m = ld m;
          m1 = force? m;
          checkMissing(m1);
          return m1;
        };
        r29 = dyn sprintf3("\nMessage: %s", p12);
        return r29;
      };
      r31 = dyn ifelse1(p11, "", p13);
      return r31;
    };
    r33 = dyn paste0(p2, p6, p10, p14);
    check L10() else D5();
  D3():
    deopt 7 [r3];
  D5():
    deopt 17 [r33];
  L6():
    popenv;
    return r3;
  L10():
    popenv;
    return r33;
  }
}