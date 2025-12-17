fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg r2:cls, reg SSD:*, reg SSD1:V, reg p:p(V +), reg r4:V, reg mauchly_test:cls, reg mlmfit:*, reg mlmfit1:V, reg p1:p(V +), reg __1:cls, reg r6:V, reg p2:p(V +), reg r8:V, reg data_frame:cls, reg gl:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg c:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg gl1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg c1:cls, reg r17:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V, reg mauchly_test1:cls, reg mlmfit2:*, reg mlmfit3:V, reg p7:p(V +), reg __2:cls, reg r23:V, reg p8:p(V +), reg idata:*, reg idata1:V, reg p9:p(V +), reg r26:V, reg mauchly_test2:cls, reg mlmfit4:*, reg mlmfit5:V, reg p10:p(V +), reg __3:cls, reg r28:V, reg p11:p(V +), reg __4:cls, reg r30:V, reg p12:p(V +), reg idata2:*, reg idata3:V, reg p13:p(V +), reg r33:V |
    mkenv;
    r = clos inner64320599;
    st `mauchly.test` = r;
    __ = ldf `::`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn __("utils", "example");
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    checkFun.0(r1);
    r2 = r1 as cls;
    p = prom<V +>{
      SSD = ld SSD;
      SSD1 = force? SSD;
      checkMissing(SSD1);
      return SSD1;
    };
    r4 = dyn r2(p);
    check L2() else D2();
  D2():
    deopt 10 [r4];
  L2():
    mauchly_test = ldf `mauchly.test`;
    check L3() else D3();
  D3():
    deopt 12 [];
  L3():
    p1 = prom<V +>{
      mlmfit = ld mlmfit;
      mlmfit1 = force? mlmfit;
      checkMissing(mlmfit1);
      return mlmfit1;
    };
    p2 = prom<V +>{
      __1 = ldf `~` in base;
      r6 = dyn __1(1.0);
      return r6;
    };
    r8 = dyn mauchly_test[, X](p1, p2);
    check L4() else D4();
  D4():
    deopt 16 [r8];
  L4():
    data_frame = ldf `data.frame`;
    check L5() else D5();
  D5():
    deopt 18 [];
  L5():
    p4 = prom<V +>{
      gl = ldf gl;
      p3 = prom<V +>{
        sym = ldf c;
        base = ldf c in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r10):
        return r10;
      L1():
        c = ldf c in base;
        r11 = dyn c(0.0, 4.0, 8.0);
        goto L0(r11);
      L2():
        r9 = dyn base(0.0, 4.0, 8.0);
        goto L0(r9);
      };
      r13 = dyn gl[, , , labels](3.0, 1.0, 6.0, p3);
      return r13;
    };
    p6 = prom<V +>{
      gl1 = ldf gl;
      p5 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r16):
        return r16;
      L1():
        c1 = ldf c in base;
        r17 = dyn c1("A", "P");
        goto L0(r17);
      L2():
        r15 = dyn base1("A", "P");
        goto L0(r15);
      };
      r19 = dyn gl1[, , , labels](2.0, 3.0, 6.0, p5);
      return r19;
    };
    r21 = dyn data_frame[deg, noise](p4, p6);
    check L6() else D6();
  D6():
    deopt 23 [r21];
  L6():
    st idata = r21;
    mauchly_test1 = ldf `mauchly.test`;
    check L7() else D7();
  D7():
    deopt 26 [];
  L7():
    p7 = prom<V +>{
      mlmfit2 = ld mlmfit;
      mlmfit3 = force? mlmfit2;
      checkMissing(mlmfit3);
      return mlmfit3;
    };
    p8 = prom<V +>{
      __2 = ldf `~` in base;
      r23 = dyn __2(<lang `+`(deg, noise)>);
      return r23;
    };
    p9 = prom<V +>{
      idata = ld idata;
      idata1 = force? idata;
      checkMissing(idata1);
      return idata1;
    };
    r26 = dyn mauchly_test1[, X, idata](p7, p8, p9);
    check L8() else D8();
  D8():
    deopt 32 [r26];
  L8():
    mauchly_test2 = ldf `mauchly.test`;
    check L9() else D9();
  D9():
    deopt 34 [];
  L9():
    p10 = prom<V +>{
      mlmfit4 = ld mlmfit;
      mlmfit5 = force? mlmfit4;
      checkMissing(mlmfit5);
      return mlmfit5;
    };
    p11 = prom<V +>{
      __3 = ldf `~` in base;
      r28 = dyn __3(<lang `+`(deg, noise)>);
      return r28;
    };
    p12 = prom<V +>{
      __4 = ldf `~` in base;
      r30 = dyn __4(<sym noise>);
      return r30;
    };
    p13 = prom<V +>{
      idata2 = ld idata;
      idata3 = force? idata2;
      checkMissing(idata3);
      return idata3;
    };
    r33 = dyn mauchly_test2[, M, X, idata](p10, p11, p12, p13);
    check L10() else D10();
  D10():
    deopt 42 [r33];
  L10():
    popenv;
    return r33;
  }
}
fun inner64320599(object, `...`) {
  (reg object:*, reg ddd:dots) -+> V { var object:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st object = object;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("mauchly.test", <sym object>);
    goto L0(r2);
  L2():
    r = dyn base("mauchly.test", <sym object>);
    goto L0(r);
  }
}