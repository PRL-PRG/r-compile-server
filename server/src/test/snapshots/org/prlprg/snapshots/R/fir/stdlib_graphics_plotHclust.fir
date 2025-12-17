fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner108593464;
    st plotHclust = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner108593464(n, merge, height, order, hang, labels, `...`) {
  (reg n:*, reg merge:*, reg height:*, reg order:*, reg hang:*, reg labels:*, reg ddd:dots) -+> V { var n:*, var merge:*, var height:*, var order:*, var hang:*, var labels:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg _External_graphics:cls, reg C_dendwindow:*, reg C_dendwindow1:V, reg p:p(V +), reg n1:*, reg n2:V, reg p1:p(V +), reg merge1:*, reg merge2:V, reg p2:p(V +), reg height1:*, reg height2:V, reg p3:p(V +), reg hang1:*, reg hang2:V, reg p4:p(V +), reg labels1:*, reg labels2:V, reg p5:p(V +), reg ddd1:dots?, reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg _External_graphics1:cls, reg C_dend:*, reg C_dend1:V, reg p6:p(V +), reg n3:*, reg n4:V, reg p7:p(V +), reg merge3:*, reg merge4:V, reg p8:p(V +), reg height3:*, reg height4:V, reg p9:p(V +), reg order1:*, reg order2:V, reg p10:p(V +), reg hang3:*, reg hang4:V, reg p11:p(V +), reg labels3:*, reg labels4:V, reg p12:p(V +), reg ddd2:dots?, reg r18:V |
    mkenv;
    st n = n;
    st merge = merge;
    st height = height;
    st order = order;
    st hang = hang;
    st labels = labels;
    st `...` = ddd;
    sym = ldf `.External.graphics`;
    base = ldf `.External.graphics` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0():
    sym1 = ldf `.External.graphics`;
    base1 = ldf `.External.graphics` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L2():
    _External_graphics = ldf `.External.graphics`;
    check L4() else D0();
  L3():
    r = dyn base(<sym C_dendwindow>, <sym n>, <sym merge>, <sym height>, <sym hang>, <sym labels>, <sym ...>);
    goto L0();
  D0():
    deopt 2 [];
  L1(r10):
    popenv;
    return r10;
  L4():
    p = prom<V +>{
      C_dendwindow = ld C_dendwindow;
      C_dendwindow1 = force? C_dendwindow;
      checkMissing(C_dendwindow1);
      return C_dendwindow1;
    };
    p1 = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    p2 = prom<V +>{
      merge1 = ld merge;
      merge2 = force? merge1;
      checkMissing(merge2);
      return merge2;
    };
    p3 = prom<V +>{
      height1 = ld height;
      height2 = force? height1;
      checkMissing(height2);
      return height2;
    };
    p4 = prom<V +>{
      hang1 = ld hang;
      hang2 = force? hang1;
      checkMissing(hang2);
      return hang2;
    };
    p5 = prom<V +>{
      labels1 = ld labels;
      labels2 = force? labels1;
      checkMissing(labels2);
      return labels2;
    };
    ddd1 = ld `...`;
    r8 = dyn _External_graphics[, , , , , , `...`](p, p1, p2, p3, p4, p5, ddd1);
    check L5() else D1();
  L6():
    _External_graphics1 = ldf `.External.graphics`;
    check L8() else D2();
  L7():
    r9 = dyn base1(<sym C_dend>, <sym n>, <sym merge>, <sym height>, <sym order>, <sym hang>, <sym labels>, <sym ...>);
    goto L1(r9);
  D1():
    deopt 10 [r8];
  D2():
    deopt 13 [];
  L5():
    goto L0();
  L8():
    p6 = prom<V +>{
      C_dend = ld C_dend;
      C_dend1 = force? C_dend;
      checkMissing(C_dend1);
      return C_dend1;
    };
    p7 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    p8 = prom<V +>{
      merge3 = ld merge;
      merge4 = force? merge3;
      checkMissing(merge4);
      return merge4;
    };
    p9 = prom<V +>{
      height3 = ld height;
      height4 = force? height3;
      checkMissing(height4);
      return height4;
    };
    p10 = prom<V +>{
      order1 = ld order;
      order2 = force? order1;
      checkMissing(order2);
      return order2;
    };
    p11 = prom<V +>{
      hang3 = ld hang;
      hang4 = force? hang3;
      checkMissing(hang4);
      return hang4;
    };
    p12 = prom<V +>{
      labels3 = ld labels;
      labels4 = force? labels3;
      checkMissing(labels4);
      return labels4;
    };
    ddd2 = ld `...`;
    r18 = dyn _External_graphics1[, , , , , , , `...`](p6, p7, p8, p9, p10, p11, p12, ddd2);
    check L9() else D3();
  D3():
    deopt 22 [r18];
  L9():
    goto L1(r18);
  }
}