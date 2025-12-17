fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_rdxrefs_db_to_data_frame` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg r:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p:p(V +), reg Map:cls, reg wrk:*, reg wrk1:V, reg p1:p(V +), reg lapply:cls, reg x1:*, reg x2:V, reg p2:p(V +), reg as_data_frame:*, reg as_data_frame1:V, reg p3:p(V +), reg r5:V, reg p4:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg x3:*, reg x4:V, reg names:cls, reg r9:V, reg p5:p(V +), reg r11:V, reg p6:p(V +), reg r13:V |
    mkenv;
    st x = x;
    r = clos inner962611399;
    st wrk = r;
    do_call = ldf `do.call`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p6 = prom<V +>{
      Map = ldf Map;
      p1 = prom<V +>{
        wrk = ld wrk;
        wrk1 = force? wrk;
        checkMissing(wrk1);
        return wrk1;
      };
      p4 = prom<V +>{
        lapply = ldf lapply;
        p2 = prom<V +>{
          x1 = ld x;
          x2 = force? x1;
          checkMissing(x2);
          return x2;
        };
        p3 = prom<V +>{
          as_data_frame = ld `as.data.frame`;
          as_data_frame1 = force? as_data_frame;
          checkMissing(as_data_frame1);
          return as_data_frame1;
        };
        r5 = dyn lapply(p2, p3);
        return r5;
      };
      p5 = prom<V +>{
        sym = ldf names;
        base = ldf names in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r8):
        return r8;
      L1():
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        names = ldf names in base;
        r9 = dyn names(x4);
        goto L0(r9);
      L2():
        r7 = dyn base(<sym x>);
        goto L0(r7);
      };
      r11 = dyn Map(p1, p4, p5);
      return r11;
    };
    r13 = dyn do_call(p, p6);
    check L1() else D1();
  D1():
    deopt 7 [r13];
  L1():
    popenv;
    return r13;
  }
}
fun inner962611399(u, p) {
  (reg u:*, reg p:*) -+> V { var u:*, var p:*, reg sprintf:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg u1:*, reg u2:V, reg c:L, reg u4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p4:p(V +), reg r3:V, reg l:*, reg c1:L, reg r5:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg u5:*, reg u6:V |
    mkenv;
    st u = u;
    st p = p;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    p4 = prom<V +>{
      u1 = ld u;
      u2 = force? u1;
      checkMissing(u2);
      c = `is.object`(u2);
      if c then L1() else L2(u2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", u2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(u4):
      r1 = `$`(u4, <sym Source>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn sprintf("%s::%s", p3, p4);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    l = ld u;
    c1 = `is.object`(l);
    if c1 then L3() else L4(r3, l);
  L2(dx3):
    st u = dx3;
    u5 = ld u;
    check L6() else D2();
  L3():
    dr2 = tryDispatchBuiltin.0("$<-", l, r3);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L5() else L4(r3, dr2);
  L4(r5, l2):
    r8 = `$<-`(l2, <sym Source>, r3);
    goto L2(r8);
  D2():
    deopt 9 [u5];
  L5():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L6():
    u6 = force? u5;
    checkMissing(u6);
    popenv;
    return u6;
  }
}