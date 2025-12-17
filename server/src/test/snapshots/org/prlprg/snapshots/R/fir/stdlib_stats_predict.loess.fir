fun main() {
  () -+> V { reg r:cls, reg loess:cls, reg __:cls, reg r1:V, reg p:p(V +), reg cars:*, reg cars1:V, reg p1:p(V +), reg r4:V, reg predict:cls, reg cars_lo:*, reg cars_lo1:V, reg p2:p(V +), reg data_frame:cls, reg seq:cls, reg r6:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:V, reg loess1:cls, reg __1:cls, reg r11:V, reg p5:p(V +), reg cars2:*, reg cars3:V, reg p6:p(V +), reg loess_control:cls, reg r14:V, reg p7:p(V +), reg r16:V, reg predict1:cls, reg cars_lo2:*, reg cars_lo3:V, reg p8:p(V +), reg data_frame1:cls, reg seq1:cls, reg r18:V, reg p9:p(V +), reg r20:V, reg p10:p(V +), reg r22:V |
    mkenv;
    r = clos inner2320999047;
    st `predict.loess` = r;
    loess = ldf loess;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      __ = ldf `~` in base;
      r1 = dyn __(<sym dist>, <sym speed>);
      return r1;
    };
    p1 = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    r4 = dyn loess(p, p1);
    check L1() else D1();
  D1():
    deopt 7 [r4];
  L1():
    st `cars.lo` = r4;
    predict = ldf predict;
    check L2() else D2();
  D2():
    deopt 10 [];
  L2():
    p2 = prom<V +>{
      cars_lo = ld `cars.lo`;
      cars_lo1 = force? cars_lo;
      checkMissing(cars_lo1);
      return cars_lo1;
    };
    p4 = prom<V +>{
      data_frame = ldf `data.frame`;
      p3 = prom<V +>{
        seq = ldf seq;
        r6 = dyn seq(5.0, 30.0, 1.0);
        return r6;
      };
      r8 = dyn data_frame[speed](p3);
      return r8;
    };
    r10 = dyn predict[, , se](p2, p4, TRUE);
    check L3() else D3();
  D3():
    deopt 15 [r10];
  L3():
    loess1 = ldf loess;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    p5 = prom<V +>{
      __1 = ldf `~` in base;
      r11 = dyn __1(<sym dist>, <sym speed>);
      return r11;
    };
    p6 = prom<V +>{
      cars2 = ld cars;
      cars3 = force? cars2;
      checkMissing(cars3);
      return cars3;
    };
    p7 = prom<V +>{
      loess_control = ldf `loess.control`;
      r14 = dyn loess_control[surface]("direct");
      return r14;
    };
    r16 = dyn loess1[, , control](p5, p6, p7);
    check L5() else D5();
  D5():
    deopt 22 [r16];
  L5():
    st `cars.lo2` = r16;
    predict1 = ldf predict;
    check L6() else D6();
  D6():
    deopt 25 [];
  L6():
    p8 = prom<V +>{
      cars_lo2 = ld `cars.lo2`;
      cars_lo3 = force? cars_lo2;
      checkMissing(cars_lo3);
      return cars_lo3;
    };
    p10 = prom<V +>{
      data_frame1 = ldf `data.frame`;
      p9 = prom<V +>{
        seq1 = ldf seq;
        r18 = dyn seq1(5.0, 30.0, 1.0);
        return r18;
      };
      r20 = dyn data_frame1[speed](p9);
      return r20;
    };
    r22 = dyn predict1[, , se](p8, p10, TRUE);
    check L7() else D7();
  D7():
    deopt 30 [r22];
  L7():
    popenv;
    return r22;
  }
}
fun inner2320999047(object, newdata, se, `na.action`, `...`) {
  (reg object:*, reg newdata:*, reg se:*, reg na_action:*, reg ddd:dots) -+> V { var object:*, var newdata:*, reg newdata_isMissing:L, reg newdata_orDefault:*, var se:*, reg se_isMissing:L, reg se_orDefault:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_pass:*, reg na_pass1:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg object1:*, reg object2:V, reg inherits:cls, reg r3:V, reg r4:V, reg c:L, reg stop:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg newdata1:*, reg newdata2:V, reg c1:V, reg c2:L, reg c4:V, reg se1:*, reg se2:V, reg r9:V, reg c5:L, reg c6:V, reg c8:L, reg fitted:cls, reg object3:*, reg object4:V, reg p1:p(V +), reg r11:V, reg object5:*, reg object6:V, reg c9:L, reg object8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r14:V, reg predLoess:cls, reg object9:*, reg object10:V, reg c10:L, reg object12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r15:V, reg p2:p(V +), reg object13:*, reg object14:V, reg c11:L, reg object16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg r20:V, reg newdata3:*, reg newdata4:V, reg c12:V, reg c13:L, reg object17:*, reg object18:V, reg c14:L, reg object20:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r21:V, reg is_data_frame:cls, reg newdata5:*, reg newdata6:V, reg p4:p(V +), reg r23:V, reg c15:L, reg as_matrix:cls, reg model_frame:cls, reg delete_response:cls, reg terms:cls, reg object21:*, reg object22:V, reg p5:p(V +), reg r25:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg newdata7:*, reg newdata8:V, reg p8:p(V +), reg na_action1:*, reg na_action2:V, reg p9:p(V +), reg r31:V, reg p10:p(V +), reg r33:V, reg as_matrix1:cls, reg newdata9:*, reg newdata10:V, reg p11:p(V +), reg r35:V, reg p12:p(V +), reg object23:*, reg object24:V, reg c16:L, reg object26:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r37:V, reg p13:p(V +), reg object27:*, reg object28:V, reg c17:L, reg object30:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r39:V, reg p14:p(V +), reg object31:*, reg object32:V, reg c18:L, reg object34:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r41:V, reg p15:p(V +), reg op:*, reg op1:V, reg c19:L, reg op3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r43:V, reg p16:p(V +), reg op4:*, reg op5:V, reg c20:L, reg op7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r45:V, reg p17:p(V +), reg op8:*, reg op9:V, reg c21:L, reg op11:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r47:V, reg p18:p(V +), reg op12:*, reg op13:V, reg c22:L, reg op15:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r49:V, reg p19:p(V +), reg op16:*, reg op17:V, reg c23:L, reg op19:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r51:V, reg p20:p(V +), reg op20:*, reg op21:V, reg c24:L, reg op23:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r53:V, reg p21:p(V +), reg op24:*, reg op25:V, reg c25:L, reg op27:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r55:V, reg p22:p(V +), reg op28:*, reg op29:V, reg c26:L, reg op31:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r57:V, reg p23:p(V +), reg object35:*, reg object36:V, reg c27:L, reg object38:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r59:V, reg p24:p(V +), reg object39:*, reg object40:V, reg c28:L, reg object42:V, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg r61:V, reg p25:p(V +), reg se3:*, reg se4:V, reg p26:p(V +), reg r64:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r65:V, reg r66:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r67:V, reg r68:V, reg newdata11:*, reg newdata12:V, reg attr:cls, reg r69:V, reg c29:V, reg r70:V, reg c30:L, reg se5:*, reg se6:V, reg c31:L, reg array:cls, reg res:*, reg res1:V, reg c32:L, reg res3:V, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg r71:V, reg p27:p(V +), reg out_attrs:*, reg out_attrs1:V, reg c33:L, reg out_attrs3:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg r73:V, reg p28:p(V +), reg out_attrs4:*, reg out_attrs5:V, reg c34:L, reg out_attrs7:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg r75:V, reg p29:p(V +), reg r77:V, reg l:*, reg c35:L, reg r79:V, reg l2:*, reg dr40:V, reg dc20:L, reg dx40:V, reg dx41:V, reg r82:V, reg array1:cls, reg res4:*, reg res5:V, reg c36:L, reg res7:V, reg dr42:V, reg dc21:L, reg dx42:V, reg dx43:V, reg r83:V, reg p30:p(V +), reg out_attrs8:*, reg out_attrs9:V, reg c37:L, reg out_attrs11:V, reg dr44:V, reg dc22:L, reg dx44:V, reg dx45:V, reg r85:V, reg p31:p(V +), reg out_attrs12:*, reg out_attrs13:V, reg c38:L, reg out_attrs15:V, reg dr46:V, reg dc23:L, reg dx46:V, reg dx47:V, reg r87:V, reg p32:p(V +), reg r89:V, reg l3:*, reg c39:L, reg r91:V, reg l5:*, reg dr48:V, reg dc24:L, reg dx48:V, reg r93:V, reg dx49:V, reg r94:V, reg r95:V, reg array2:cls, reg res8:*, reg res9:V, reg p33:p(V +), reg out_attrs16:*, reg out_attrs17:V, reg c40:L, reg out_attrs19:V, reg dr50:V, reg dc25:L, reg dx50:V, reg dx51:V, reg r97:V, reg p34:p(V +), reg out_attrs20:*, reg out_attrs21:V, reg c41:L, reg out_attrs23:V, reg dr52:V, reg dc26:L, reg dx52:V, reg dx53:V, reg r99:V, reg p35:p(V +), reg r101:V, reg se7:*, reg se8:V, reg c42:L, reg object43:*, reg object44:V, reg c43:L, reg object46:V, reg dr54:V, reg dc27:L, reg dx54:V, reg dx55:V, reg r103:V, reg r104:V, reg object47:*, reg object48:V, reg c44:L, reg r106:V, reg object50:V, reg dr56:V, reg dc28:L, reg dx56:V, reg r108:V, reg dx57:V, reg r109:V, reg r110:V, reg l6:*, reg c45:L, reg r112:V, reg l8:*, reg dr58:V, reg dc29:L, reg dx58:V, reg r114:V, reg dx59:V, reg r115:V, reg res10:*, reg res11:V |
    mkenv;
    st object = object;
    newdata_isMissing = missing.0(newdata);
    if newdata_isMissing then L0(NULL) else L0(newdata);
  L0(newdata_orDefault):
    st newdata = newdata_orDefault;
    se_isMissing = missing.0(se);
    if se_isMissing then L1(FALSE) else L1(se);
  L1(se_orDefault):
    st se = se_orDefault;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L2() else L3(na_action);
  L2():
    p = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    goto L3(p);
  L3(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    st `...` = ddd;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L4(r2):
    r4 = `!`(r2);
    c = `as.logical`(r4);
    if c then L23() else L5();
  L19():
    object1 = ld object;
    check L21() else D0();
  L20():
    r1 = dyn base(<sym object>, "loess");
    goto L4(r1);
  D0():
    deopt 2 [object1];
  L5():
    goto L6();
  L6():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L21():
    object2 = force? object1;
    checkMissing(object2);
    inherits = ldf inherits in base;
    r3 = dyn inherits(object2, "loess", FALSE);
    check L22() else D1();
  L23():
    stop = ldf stop;
    check L24() else D2();
  D1():
    deopt 7 [r3];
  D2():
    deopt 10 [];
  L7(r8):
    c2 = `as.logical`(r8);
    if c2 then L30() else L8(c2);
  L22():
    goto L4(r3);
  L24():
    r5 = dyn stop("first argument must be a \"loess\" object");
    check L25() else D3();
  L27():
    newdata1 = ld newdata;
    check L29() else D4();
  L28():
    r7 = dyn base1(<sym newdata>);
    goto L7(r7);
  D3():
    deopt 12 [r5];
  D4():
    deopt 16 [newdata1];
  L8(c4):
    c8 = `as.logical`(c4);
    if c8 then L33() else L9();
  L25():
    goto L6();
  L29():
    newdata2 = force? newdata1;
    checkMissing(newdata2);
    c1 = `==`(newdata2, NULL);
    goto L7(c1);
  L30():
    se1 = ld se;
    check L31() else D5();
  D5():
    deopt 19 [c2, se1];
  L9():
    object5 = ld object;
    check L38() else D8();
  L31():
    se2 = force? se1;
    checkMissing(se2);
    r9 = `!`(se2);
    c5 = `as.logical`(r9);
    c6 = `&&`(c2, c5);
    goto L8(c6);
  L33():
    fitted = ldf fitted;
    check L34() else D6();
  D6():
    deopt 24 [];
  D8():
    deopt 30 [object5];
  L34():
    p1 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    r11 = dyn fitted(p1);
    check L35() else D7();
  L38():
    object6 = force? object5;
    checkMissing(object6);
    c9 = `is.object`(object6);
    if c9 then L40() else L41(object6);
  D7():
    deopt 26 [r11];
  L35():
    popenv;
    return r11;
  L39(dx1):
    st op = dx1;
    predLoess = ldf predLoess;
    check L43() else D9();
  L40():
    dr = tryDispatchBuiltin.1("$", object6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L42() else L41(dr);
  L41(object8):
    r14 = `$`(object8, <sym pars>);
    goto L39(r14);
  D9():
    deopt 35 [];
  L42():
    dx = getTryDispatchBuiltinValue(dr);
    goto L39(dx);
  L43():
    p2 = prom<V +>{
      object9 = ld object;
      object10 = force? object9;
      checkMissing(object10);
      c10 = `is.object`(object10);
      if c10 then L1() else L2(object10);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", object10);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(object12):
      r15 = `$`(object12, <sym y>);
      goto L0(r15);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p3 = prom<V +>{
      object13 = ld object;
      object14 = force? object13;
      checkMissing(object14);
      c11 = `is.object`(object14);
      if c11 then L1() else L2(object14);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", object14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(object16):
      r17 = `$`(object16, <sym x>);
      goto L0(r17);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p12 = prom<V +>{
      sym2 = ldf `is.null`;
      base2 = ldf `is.null` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L3() else L4();
    L0(r20):
      c13 = `as.logical`(r20);
      if c13 then L5() else L1();
    L3():
      newdata3 = ld newdata;
      newdata4 = force? newdata3;
      checkMissing(newdata4);
      c12 = `==`(newdata4, NULL);
      goto L0(c12);
    L4():
      r19 = dyn base2(<sym newdata>);
      goto L0(r19);
    L1():
      is_data_frame = ldf `is.data.frame`;
      p4 = prom<V +>{
        newdata5 = ld newdata;
        newdata6 = force? newdata5;
        checkMissing(newdata6);
        return newdata6;
      };
      r23 = dyn is_data_frame(p4);
      c15 = `as.logical`(r23);
      if c15 then L11() else L2();
    L5():
      object17 = ld object;
      object18 = force? object17;
      checkMissing(object18);
      c14 = `is.object`(object18);
      if c14 then L7() else L8(object18);
    L2():
      as_matrix1 = ldf `as.matrix`;
      p11 = prom<V +>{
        newdata9 = ld newdata;
        newdata10 = force? newdata9;
        checkMissing(newdata10);
        return newdata10;
      };
      r35 = dyn as_matrix1(p11);
      return r35;
    L6(dx7):
      return dx7;
    L7():
      dr6 = tryDispatchBuiltin.1("$", object18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L9() else L8(dr6);
    L8(object20):
      r21 = `$`(object20, <sym x>);
      goto L6(r21);
    L11():
      as_matrix = ldf `as.matrix`;
      p10 = prom<V +>{
        model_frame = ldf `model.frame`;
        p7 = prom<V +>{
          delete_response = ldf `delete.response`;
          p6 = prom<V +>{
            terms = ldf terms;
            p5 = prom<V +>{
              object21 = ld object;
              object22 = force? object21;
              checkMissing(object22);
              return object22;
            };
            r25 = dyn terms(p5);
            return r25;
          };
          r27 = dyn delete_response(p6);
          return r27;
        };
        p8 = prom<V +>{
          newdata7 = ld newdata;
          newdata8 = force? newdata7;
          checkMissing(newdata8);
          return newdata8;
        };
        p9 = prom<V +>{
          na_action1 = ld `na.action`;
          na_action2 = force? na_action1;
          checkMissing(na_action2);
          return na_action2;
        };
        r31 = dyn model_frame[, , `na.action`](p7, p8, p9);
        return r31;
      };
      r33 = dyn as_matrix(p10);
      return r33;
    L9():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L6(dx6);
    };
    p13 = prom<V +>{
      object23 = ld object;
      object24 = force? object23;
      checkMissing(object24);
      c16 = `is.object`(object24);
      if c16 then L1() else L2(object24);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", object24);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(object26):
      r37 = `$`(object26, <sym s>);
      goto L0(r37);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p14 = prom<V +>{
      object27 = ld object;
      object28 = force? object27;
      checkMissing(object28);
      c17 = `is.object`(object28);
      if c17 then L1() else L2(object28);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", object28);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(object30):
      r39 = `$`(object30, <sym weights>);
      goto L0(r39);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p15 = prom<V +>{
      object31 = ld object;
      object32 = force? object31;
      checkMissing(object32);
      c18 = `is.object`(object32);
      if c18 then L1() else L2(object32);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", object32);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object34):
      r41 = `$`(object34, <sym robust>);
      goto L0(r41);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p16 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      c19 = `is.object`(op1);
      if c19 then L1() else L2(op1);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", op1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(op3):
      r43 = `$`(op3, <sym span>);
      goto L0(r43);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p17 = prom<V +>{
      op4 = ld op;
      op5 = force? op4;
      checkMissing(op5);
      c20 = `is.object`(op5);
      if c20 then L1() else L2(op5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", op5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(op7):
      r45 = `$`(op7, <sym degree>);
      goto L0(r45);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p18 = prom<V +>{
      op8 = ld op;
      op9 = force? op8;
      checkMissing(op9);
      c21 = `is.object`(op9);
      if c21 then L1() else L2(op9);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("$", op9);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(op11):
      r47 = `$`(op11, <sym normalize>);
      goto L0(r47);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    p19 = prom<V +>{
      op12 = ld op;
      op13 = force? op12;
      checkMissing(op13);
      c22 = `is.object`(op13);
      if c22 then L1() else L2(op13);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("$", op13);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(op15):
      r49 = `$`(op15, <sym parametric>);
      goto L0(r49);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p20 = prom<V +>{
      op16 = ld op;
      op17 = force? op16;
      checkMissing(op17);
      c23 = `is.object`(op17);
      if c23 then L1() else L2(op17);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("$", op17);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(op19):
      r51 = `$`(op19, <sym drop.square>);
      goto L0(r51);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    p21 = prom<V +>{
      op20 = ld op;
      op21 = force? op20;
      checkMissing(op21);
      c24 = `is.object`(op21);
      if c24 then L1() else L2(op21);
    L0(dx25):
      return dx25;
    L1():
      dr24 = tryDispatchBuiltin.1("$", op21);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(op23):
      r53 = `$`(op23, <sym surface>);
      goto L0(r53);
    L3():
      dx24 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx24);
    };
    p22 = prom<V +>{
      op24 = ld op;
      op25 = force? op24;
      checkMissing(op25);
      c25 = `is.object`(op25);
      if c25 then L1() else L2(op25);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("$", op25);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(op27):
      r55 = `$`(op27, <sym cell>);
      goto L0(r55);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    p23 = prom<V +>{
      op28 = ld op;
      op29 = force? op28;
      checkMissing(op29);
      c26 = `is.object`(op29);
      if c26 then L1() else L2(op29);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("$", op29);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(op31):
      r57 = `$`(op31, <sym family>);
      goto L0(r57);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    p24 = prom<V +>{
      object35 = ld object;
      object36 = force? object35;
      checkMissing(object36);
      c27 = `is.object`(object36);
      if c27 then L1() else L2(object36);
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("$", object36);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(object38):
      r59 = `$`(object38, <sym kd>);
      goto L0(r59);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    p25 = prom<V +>{
      object39 = ld object;
      object40 = force? object39;
      checkMissing(object40);
      c28 = `is.object`(object40);
      if c28 then L1() else L2(object40);
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("$", object40);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(object42):
      r61 = `$`(object42, <sym divisor>);
      goto L0(r61);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    p26 = prom<V +>{
      se3 = ld se;
      se4 = force? se3;
      checkMissing(se4);
      return se4;
    };
    r64 = dyn predLoess[, , newx, , , , , , , , , , , , , , se](p2, p3, p12, p13, p14, p15, p16, p17, p18, p19, p20, p21, p22, p23, p24, p25, p26);
    check L44() else D10();
  D10():
    deopt 55 [r64];
  L44():
    st res = r64;
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L11(r66):
    r70 = `!`(r66);
    c30 = `as.logical`(r70);
    if c30 then L51() else L13();
  L45():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L47() else L48();
  L46():
    r65 = dyn base3(<lang `<-`(out.attrs, attr(newdata, "out.attrs"))>);
    goto L11(r65);
  L12(r68):
    st `out.attrs` = r68;
    c29 = `==`(r68, NULL);
    goto L11(c29);
  L13():
    goto L16();
  L16():
    se7 = ld se;
    check L70() else D20();
  L47():
    newdata11 = ld newdata;
    check L49() else D11();
  L48():
    r67 = dyn base4(<sym newdata>, "out.attrs");
    goto L12(r67);
  L51():
    se5 = ld se;
    check L52() else D13();
  D11():
    deopt 60 [newdata11];
  D13():
    deopt 68 [se5];
  D20():
    deopt 97 [se7];
  L49():
    newdata12 = force? newdata11;
    checkMissing(newdata12);
    attr = ldf attr in base;
    r69 = dyn attr(newdata12, "out.attrs");
    check L50() else D12();
  L52():
    se6 = force? se5;
    checkMissing(se6);
    c31 = `as.logical`(se6);
    if c31 then L53() else L14();
  L70():
    se8 = force? se7;
    checkMissing(se8);
    c42 = `as.logical`(se8);
    if c42 then L71() else L17();
  D12():
    deopt 64 [r69];
  L14():
    array2 = ldf array;
    check L67() else D18();
  L15(r95):
    goto L16();
  L17():
    goto L18();
  L18():
    res10 = ld res;
    check L87() else D23();
  L50():
    goto L12(r69);
  L53():
    array = ldf array;
    check L54() else D14();
  L71():
    object43 = ld object;
    check L72() else D21();
  D14():
    deopt 71 [];
  D18():
    deopt 89 [];
  D21():
    deopt 99 [object43];
  D23():
    deopt 112 [res10];
  L54():
    p27 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      c32 = `is.object`(res1);
      if c32 then L1() else L2(res1);
    L0(dx35):
      return dx35;
    L1():
      dr34 = tryDispatchBuiltin.1("$", res1);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L3() else L2(dr34);
    L2(res3):
      r71 = `$`(res3, <sym fit>);
      goto L0(r71);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx34);
    };
    p28 = prom<V +>{
      out_attrs = ld `out.attrs`;
      out_attrs1 = force? out_attrs;
      checkMissing(out_attrs1);
      c33 = `is.object`(out_attrs1);
      if c33 then L1() else L2(out_attrs1);
    L0(dx37):
      return dx37;
    L1():
      dr36 = tryDispatchBuiltin.1("$", out_attrs1);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(out_attrs3):
      r73 = `$`(out_attrs3, <sym dim>);
      goto L0(r73);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx36);
    };
    p29 = prom<V +>{
      out_attrs4 = ld `out.attrs`;
      out_attrs5 = force? out_attrs4;
      checkMissing(out_attrs5);
      c34 = `is.object`(out_attrs5);
      if c34 then L1() else L2(out_attrs5);
    L0(dx39):
      return dx39;
    L1():
      dr38 = tryDispatchBuiltin.1("$", out_attrs5);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(out_attrs7):
      r75 = `$`(out_attrs7, <sym dimnames>);
      goto L0(r75);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx38);
    };
    r77 = dyn array(p27, p28, p29);
    check L55() else D15();
  L67():
    p33 = prom<V +>{
      res8 = ld res;
      res9 = force? res8;
      checkMissing(res9);
      return res9;
    };
    p34 = prom<V +>{
      out_attrs16 = ld `out.attrs`;
      out_attrs17 = force? out_attrs16;
      checkMissing(out_attrs17);
      c40 = `is.object`(out_attrs17);
      if c40 then L1() else L2(out_attrs17);
    L0(dx51):
      return dx51;
    L1():
      dr50 = tryDispatchBuiltin.1("$", out_attrs17);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(out_attrs19):
      r97 = `$`(out_attrs19, <sym dim>);
      goto L0(r97);
    L3():
      dx50 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx50);
    };
    p35 = prom<V +>{
      out_attrs20 = ld `out.attrs`;
      out_attrs21 = force? out_attrs20;
      checkMissing(out_attrs21);
      c41 = `is.object`(out_attrs21);
      if c41 then L1() else L2(out_attrs21);
    L0(dx53):
      return dx53;
    L1():
      dr52 = tryDispatchBuiltin.1("$", out_attrs21);
      dc26 = getTryDispatchBuiltinDispatched(dr52);
      if dc26 then L3() else L2(dr52);
    L2(out_attrs23):
      r99 = `$`(out_attrs23, <sym dimnames>);
      goto L0(r99);
    L3():
      dx52 = getTryDispatchBuiltinValue(dr52);
      goto L0(dx52);
    };
    r101 = dyn array2(p33, p34, p35);
    check L68() else D19();
  L72():
    object44 = force? object43;
    checkMissing(object44);
    c43 = `is.object`(object44);
    if c43 then L74() else L75(object44);
  L87():
    res11 = force? res10;
    checkMissing(res11);
    popenv;
    return res11;
  D15():
    deopt 75 [r77];
  D19():
    deopt 93 [r101];
  L55():
    l = ld res;
    c35 = `is.object`(l);
    if c35 then L57() else L58(r77, l);
  L68():
    st res = r101;
    goto L15(r101);
  L73(dx55):
    r104 = `^`(dx55, 2.0);
    object47 = ld object;
    check L77() else D22();
  L74():
    dr54 = tryDispatchBuiltin.1("$", object44);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L76() else L75(dr54);
  L75(object46):
    r103 = `$`(object46, <sym one.delta>);
    goto L73(r103);
  D22():
    deopt 103 [r104, object47];
  L56(dx41):
    st res = dx41;
    array1 = ldf array;
    check L60() else D16();
  L57():
    dr40 = tryDispatchBuiltin.0("$<-", l, r77);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L59() else L58(r77, dr40);
  L58(r79, l2):
    r82 = `$<-`(l2, <sym fit>, r77);
    goto L56(r82);
  L76():
    dx54 = getTryDispatchBuiltinValue(dr54);
    goto L73(dx54);
  L77():
    object48 = force? object47;
    checkMissing(object48);
    c44 = `is.object`(object48);
    if c44 then L79() else L80(r104, object48);
  D16():
    deopt 80 [];
  L59():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L56(dx40);
  L60():
    p30 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      c36 = `is.object`(res5);
      if c36 then L1() else L2(res5);
    L0(dx43):
      return dx43;
    L1():
      dr42 = tryDispatchBuiltin.1("$", res5);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L3() else L2(dr42);
    L2(res7):
      r83 = `$`(res7, <sym se.fit>);
      goto L0(r83);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr42);
      goto L0(dx42);
    };
    p31 = prom<V +>{
      out_attrs8 = ld `out.attrs`;
      out_attrs9 = force? out_attrs8;
      checkMissing(out_attrs9);
      c37 = `is.object`(out_attrs9);
      if c37 then L1() else L2(out_attrs9);
    L0(dx45):
      return dx45;
    L1():
      dr44 = tryDispatchBuiltin.1("$", out_attrs9);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L3() else L2(dr44);
    L2(out_attrs11):
      r85 = `$`(out_attrs11, <sym dim>);
      goto L0(r85);
    L3():
      dx44 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx44);
    };
    p32 = prom<V +>{
      out_attrs12 = ld `out.attrs`;
      out_attrs13 = force? out_attrs12;
      checkMissing(out_attrs13);
      c38 = `is.object`(out_attrs13);
      if c38 then L1() else L2(out_attrs13);
    L0(dx47):
      return dx47;
    L1():
      dr46 = tryDispatchBuiltin.1("$", out_attrs13);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L3() else L2(dr46);
    L2(out_attrs15):
      r87 = `$`(out_attrs15, <sym dimnames>);
      goto L0(r87);
    L3():
      dx46 = getTryDispatchBuiltinValue(dr46);
      goto L0(dx46);
    };
    r89 = dyn array1(p30, p31, p32);
    check L61() else D17();
  L78(r108, dx57):
    r110 = `/`(r108, dx57);
    l6 = ld res;
    c45 = `is.object`(l6);
    if c45 then L83() else L84(r110, l6);
  L79():
    dr56 = tryDispatchBuiltin.1("$", object48);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L81() else L80(r104, dr56);
  L80(r106, object50):
    r109 = `$`(object50, <sym two.delta>);
    goto L78(r106, r109);
  D17():
    deopt 84 [r89];
  L61():
    l3 = ld res;
    c39 = `is.object`(l3);
    if c39 then L63() else L64(r89, l3);
  L81():
    dx56 = getTryDispatchBuiltinValue(dr56);
    goto L78(r104, dx56);
  L82(r114, dx59):
    st res = dx59;
    goto L18();
  L83():
    dr58 = tryDispatchBuiltin.0("$<-", l6, r110);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L85() else L84(r110, dr58);
  L84(r112, l8):
    r115 = `$<-`(l8, <sym df>, r110);
    goto L82(r112, r115);
  L62(r93, dx49):
    st res = dx49;
    goto L15(r93);
  L63():
    dr48 = tryDispatchBuiltin.0("$<-", l3, r89);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L65() else L64(r89, dr48);
  L64(r91, l5):
    r94 = `$<-`(l5, <sym se.fit>, r89);
    goto L62(r91, r94);
  L85():
    dx58 = getTryDispatchBuiltinValue(dr58);
    goto L82(r110, dx58);
  L65():
    dx48 = getTryDispatchBuiltinValue(dr48);
    goto L62(r89, dx48);
  }
}