fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1327105479;
    st `ls.diag` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1327105479(`ls.out`) {
  (reg ls_out:*) -+> V { var `ls.out`:*, reg as_matrix:cls, reg ls_out1:*, reg ls_out2:V, reg c:L, reg ls_out4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg resids:*, reg resids1:V, reg dim:cls, reg r5:V, reg colnames:cls, reg ls_out5:*, reg ls_out6:V, reg c1:L, reg ls_out8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r6:V, reg c2:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r7:V, reg p1:p(V +), reg r9:V, reg colnames1:cls, reg resids2:*, reg resids3:V, reg p2:p(V +), reg r11:V, reg complete_cases:cls, reg resids4:*, reg resids5:V, reg p3:p(V +), reg ls_out9:*, reg ls_out10:V, reg c3:L, reg ls_out12:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r13:V, reg p4:p(V +), reg r15:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg good:*, reg good1:V, reg r18:V, reg any:cls, reg r19:V, reg c4:L, reg warning:cls, reg r20:V, reg resids6:*, reg resids7:V, reg c5:L, reg resids9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg good2:*, reg good3:V, reg __:cls, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg ls_out13:*, reg ls_out14:V, reg c6:L, reg ls_out16:V, reg dr10:V, reg dc5:L, reg dx13:V, reg dx14:V, reg r24:V, reg c7:V, reg r25:V, reg c8:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg ls_out17:*, reg ls_out18:V, reg c9:L, reg ls_out20:V, reg dr12:V, reg dc6:L, reg dx15:V, reg dx16:V, reg r28:V, reg c10:L, reg dx18:V, reg dr14:V, reg dc7:L, reg dx19:V, reg dx20:V, reg good4:*, reg good5:V, reg __1:cls, reg r29:V, reg r30:V, reg any1:cls, reg r31:V, reg c11:L, reg warning1:cls, reg r32:V, reg resids10:*, reg resids11:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r34:V, reg resids14:V, reg r35:V, reg ls_out21:*, reg ls_out22:V, reg c12:L, reg resids16:V, reg ls_out24:V, reg dr16:V, reg dc8:L, reg dx21:V, reg resids18:V, reg dx22:V, reg r36:V, reg c13:L, reg resids20:V, reg dx24:V, reg dr18:V, reg dc9:L, reg dx25:V, reg resids22:V, reg dx26:V, reg good6:*, reg good7:V, reg __2:cls, reg r37:V, reg r38:V, reg r39:V, reg ls_out25:*, reg ls_out26:V, reg c14:L, reg ls_out28:V, reg dr20:V, reg dc10:L, reg dx27:V, reg dx28:V, reg r41:V, reg c15:L, reg dx30:V, reg dr22:V, reg dc11:L, reg dx31:V, reg dx32:V, reg r42:V, reg nrow:cls, reg resids23:*, reg resids24:V, reg p5:p(V +), reg r44:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r45:V, reg r46:V, reg d0:*, reg d1:V, reg c16:L, reg d3:V, reg dr24:V, reg dc12:L, reg dx33:V, reg dx34:V, reg __3:cls, reg r47:V, reg rep_int:cls, reg r48:V, reg array:cls, reg d4:*, reg d5:V, reg p6:p(V +), reg r50:V, reg yname:*, reg yname1:V, reg l:*, reg colnames__:cls, reg r51:V, reg stats:*, reg stats1:V, reg qr_qy:cls, reg ls_out29:*, reg ls_out30:V, reg c17:L, reg ls_out32:V, reg dr26:V, reg dc13:L, reg dx35:V, reg dx36:V, reg r52:V, reg p7:p(V +), reg rbind:cls, reg diag:cls, reg p8:*, reg p9:V, reg p10:p(V +), reg r55:V, reg p11:p(V +), reg matrix:cls, reg n:*, reg n1:V, reg p12:*, reg p13:V, reg r57:V, reg p14:p(V +), reg p15:*, reg p16:V, reg p17:p(V +), reg r60:V, reg p18:p(V +), reg r62:V, reg p19:p(V +), reg r64:V, reg rowSums:cls, reg as_matrix1:cls, reg q:*, reg q1:V, reg r65:V, reg p20:p(V +), reg r67:V, reg p21:p(V +), reg r69:V, reg l1:*, reg c18:L, reg r71:V, reg l3:*, reg dr28:V, reg dc14:L, reg dx37:V, reg dx38:V, reg good8:*, reg good9:V, reg ___:cls, reg r74:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r75:V, reg r76:V, reg colSums:cls, reg as_matrix2:cls, reg resids25:*, reg resids26:V, reg r77:V, reg p22:p(V +), reg r79:V, reg p23:p(V +), reg r81:V, reg n2:*, reg n3:V, reg p24:*, reg p25:V, reg r82:V, reg r83:V, reg r84:V, reg matrix1:cls, reg stddev:*, reg stddev1:V, reg p26:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r86:V, reg r87:V, reg good10:*, reg good11:V, reg sum:cls, reg r88:V, reg p27:p(V +), reg ncol:cls, reg resids27:*, reg resids28:V, reg p28:p(V +), reg r91:V, reg p29:p(V +), reg r93:V, reg resids29:*, reg resids30:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r94:V, reg resids33:V, reg r95:V, reg hatdiag:*, reg hatdiag1:V, reg c19:L, reg resids35:V, reg r97:R, reg hatdiag3:V, reg dr30:V, reg dc15:L, reg dx39:V, reg resids37:V, reg r99:R, reg dx40:V, reg good12:*, reg good13:V, reg __4:cls, reg r100:V, reg r101:V, reg r102:V, reg stddevmat:*, reg stddevmat1:V, reg r103:V, reg r104:V, reg l4:*, reg c20:L, reg r106:V, reg l6:*, reg dr32:V, reg dc16:L, reg dx41:V, reg dx42:V, reg good14:*, reg good15:V, reg ___1:cls, reg r109:V, reg stdres:*, reg stdres1:V, reg c21:L, reg stdres3:V, reg dr34:V, reg dc17:L, reg dx43:V, reg dx44:V, reg good16:*, reg good17:V, reg __5:cls, reg r110:V, reg stddevmat2:*, reg stddevmat3:V, reg r111:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r114:V, reg r115:V, reg r116:V, reg n4:*, reg n5:V, reg p30:*, reg p31:V, reg r117:V, reg stddevmat4:*, reg stddevmat5:V, reg r118:V, reg r119:V, reg resids38:*, reg resids39:V, reg r120:V, reg hatdiag4:*, reg hatdiag5:V, reg c22:L, reg r125:V, reg r126:V, reg r127:V, reg r128:R, reg hatdiag7:V, reg dr36:V, reg dc18:L, reg dx45:V, reg r133:V, reg r134:V, reg r135:V, reg r136:R, reg dx46:V, reg good18:*, reg good19:V, reg __6:cls, reg r137:V, reg r138:V, reg r139:V, reg r140:V, reg n6:*, reg n7:V, reg p32:*, reg p33:V, reg r141:V, reg r142:V, reg r143:V, reg r144:V, reg r145:V, reg l7:*, reg c23:L, reg r147:V, reg l9:*, reg dr38:V, reg dc19:L, reg dx47:V, reg dx48:V, reg good20:*, reg good21:V, reg ___2:cls, reg r150:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r151:V, reg r152:V, reg hatdiag8:*, reg hatdiag9:V, reg c24:L, reg hatdiag11:V, reg dr40:V, reg dc20:L, reg dx49:V, reg dx50:V, reg good22:*, reg good23:V, reg __7:cls, reg r153:V, reg hatdiag12:*, reg hatdiag13:V, reg c25:L, reg dx52:V, reg r155:R, reg hatdiag15:V, reg dr42:V, reg dc21:L, reg dx54:V, reg dx55:V, reg r157:R, reg dx56:V, reg good24:*, reg good25:V, reg __8:cls, reg r158:V, reg r159:V, reg r160:V, reg r161:V, reg studres:*, reg studres1:V, reg c26:L, reg r163:V, reg studres3:V, reg dr44:V, reg dc22:L, reg dx57:V, reg r165:V, reg dx58:V, reg good26:*, reg good27:V, reg __9:cls, reg r166:V, reg r167:V, reg l10:*, reg c27:L, reg r169:V, reg l12:*, reg dr46:V, reg dc23:L, reg dx59:V, reg dx60:V, reg good28:*, reg good29:V, reg ___3:cls, reg r172:V, reg stdres4:*, reg stdres5:V, reg c28:L, reg stdres7:V, reg dr48:V, reg dc24:L, reg dx61:V, reg dx62:V, reg good30:*, reg good31:V, reg __10:cls, reg r173:V, reg r174:V, reg hatdiag16:*, reg hatdiag17:V, reg c29:L, reg r176:V, reg hatdiag19:V, reg dr50:V, reg dc25:L, reg dx63:V, reg r178:V, reg dx64:V, reg good32:*, reg good33:V, reg __11:cls, reg r179:V, reg r180:V, reg p34:*, reg p35:V, reg r181:V, reg hatdiag20:*, reg hatdiag21:V, reg c30:L, reg r184:V, reg r185:R, reg hatdiag23:V, reg dr52:V, reg dc26:L, reg dx65:V, reg r188:V, reg r189:R, reg dx66:V, reg good34:*, reg good35:V, reg __12:cls, reg r190:V, reg r191:V, reg r192:V, reg l13:*, reg c31:L, reg r194:V, reg l15:*, reg dr54:V, reg dc27:L, reg dx67:V, reg dx68:V, reg good36:*, reg good37:V, reg ___4:cls, reg r197:V, reg ncol1:cls, reg resids40:*, reg resids41:V, reg p36:p(V +), reg r199:V, reg r200:V, reg c32:L, reg c34:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r201:V, reg c37:L, reg r202:V, reg yname2:*, reg yname3:V, reg c38:V, reg c39:L, reg c40:V, reg c42:L, reg as_vector:cls, reg stdres8:*, reg stdres9:V, reg p37:p(V +), reg r204:V, reg as_vector1:cls, reg Cooks:*, reg Cooks1:V, reg p38:p(V +), reg r206:V, reg as_vector2:cls, reg studres4:*, reg studres5:V, reg p39:p(V +), reg r208:V, reg as_vector3:cls, reg dfits:*, reg dfits1:V, reg p40:p(V +), reg r210:V, reg as_matrix3:cls, reg ls_out33:*, reg ls_out34:V, reg c43:L, reg ls_out36:V, reg dr56:V, reg dc28:L, reg dx69:V, reg dx70:V, reg r212:V, reg c44:L, reg dx72:V, reg dr58:V, reg dc29:L, reg dx73:V, reg dx74:V, reg r213:V, reg c45:L, reg dx76:V, reg dr60:V, reg dc30:L, reg dx77:V, reg dx78:V, reg p41:*, reg p42:V, reg r214:V, reg p43:*, reg p44:V, reg r215:V, reg __13:cls, reg r216:V, reg p45:p(V +), reg r218:V, reg l16:*, reg c46:L, reg r220:R, reg l18:*, reg dr62:V, reg dc31:L, reg dx79:V, reg dx80:V, reg row:cls, reg qr:*, reg qr1:V, reg p46:p(V +), reg r224:V, reg col:cls, reg qr2:*, reg qr3:V, reg p47:p(V +), reg r226:V, reg r227:V, reg ___5:cls, reg r228:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r229:V, reg r230:V, reg solve:cls, reg qr4:*, reg qr5:V, reg p48:p(V +), reg r232:V, reg tcrossprod:cls, reg r233:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r234:V, reg r235:V, reg xnames:*, reg xnames1:V, reg xnames2:*, reg xnames3:V, reg list:cls, reg r236:V, reg l19:*, reg dimnames__:cls, reg r237:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r238:V, reg r239:V, reg stddev2:*, reg stddev3:V, reg r240:V, reg sum1:cls, reg r241:V, reg covmat_unscaled:*, reg covmat_unscaled1:V, reg r242:V, reg covmat_scaled:*, reg covmat_scaled1:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r243:V, reg covmat_scaled4:V, reg r244:V, reg outer:cls, reg diag1:cls, reg covmat_scaled5:*, reg covmat_scaled6:V, reg p49:p(V +), reg r246:V, reg p50:p(V +), reg diag2:cls, reg covmat_scaled7:*, reg covmat_scaled8:V, reg p51:p(V +), reg r249:V, reg p52:p(V +), reg r251:V, reg r252:V, reg r253:V, reg outer1:cls, reg sym16:cls, reg base16:cls, reg guard16:L, reg r254:V, reg r255:V, reg diag3:cls, reg covmat_unscaled2:*, reg covmat_unscaled3:V, reg p53:p(V +), reg r257:V, reg r258:V, reg p54:p(V +), reg stddev4:*, reg stddev5:V, reg p55:p(V +), reg r261:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r262:V, reg r263:V, reg xnames4:*, reg xnames5:V, reg yname4:*, reg yname5:V, reg list1:cls, reg r264:V, reg l20:*, reg dimnames__1:cls, reg r265:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r266:V, reg r267:V, reg stddev6:*, reg stddev7:V, reg hatdiag24:*, reg hatdiag25:V, reg stdres10:*, reg stdres11:V, reg studres6:*, reg studres7:V, reg Cooks2:*, reg Cooks3:V, reg dfits2:*, reg dfits3:V, reg cormat:*, reg cormat1:V, reg stderr:*, reg stderr1:V, reg covmat_scaled9:*, reg covmat_scaled10:V, reg covmat_unscaled4:*, reg covmat_unscaled5:V, reg list2:cls, reg r268:V |
    mkenv;
    st `ls.out` = ls_out;
    as_matrix = ldf `as.matrix`;
    check L45() else D0();
  D0():
    deopt 1 [];
  L45():
    p = prom<V +>{
      ls_out1 = ld `ls.out`;
      ls_out2 = force? ls_out1;
      checkMissing(ls_out2);
      c = `is.object`(ls_out2);
      if c then L1() else L2(ls_out2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", ls_out2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(ls_out4):
      r = `$`(ls_out4, <sym residuals>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn as_matrix(p);
    check L46() else D1();
  D1():
    deopt 3 [r2];
  L46():
    st resids = r2;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L47() else L48();
  L0(r4):
    st d0 = r4;
    colnames = ldf colnames;
    check L51() else D4();
  L47():
    resids = ld resids;
    check L49() else D2();
  L48():
    r3 = dyn base(<sym resids>);
    goto L0(r3);
  D2():
    deopt 7 [resids];
  D4():
    deopt 13 [];
  L49():
    resids1 = force? resids;
    checkMissing(resids1);
    dim = ldf dim in base;
    r5 = dyn dim(resids1);
    check L50() else D3();
  L51():
    p1 = prom<V +>{
      ls_out5 = ld `ls.out`;
      ls_out6 = force? ls_out5;
      checkMissing(ls_out6);
      c1 = `is.object`(ls_out6);
      if c1 then L1() else L2(ls_out6);
    L0(dx3):
      c2 = `is.object`(dx3);
      if c2 then L5() else L6(dx3);
    L1():
      dr2 = tryDispatchBuiltin.1("$", ls_out6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(ls_out8):
      r6 = `$`(ls_out8, <sym qr>);
      goto L0(r6);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L4(dx7):
      return dx7;
    L5():
      dr4 = tryDispatchBuiltin.1("$", dx3);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L7() else L6(dr4);
    L6(dx5):
      r7 = `$`(dx5, <sym qr>);
      goto L4(r7);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr4);
      goto L4(dx6);
    };
    r9 = dyn colnames(p1);
    check L52() else D5();
  D3():
    deopt 10 [r5];
  D5():
    deopt 15 [r9];
  L50():
    goto L0(r5);
  L52():
    st xnames = r9;
    colnames1 = ldf colnames;
    check L53() else D6();
  D6():
    deopt 18 [];
  L53():
    p2 = prom<V +>{
      resids2 = ld resids;
      resids3 = force? resids2;
      checkMissing(resids3);
      return resids3;
    };
    r11 = dyn colnames1(p2);
    check L54() else D7();
  D7():
    deopt 20 [r11];
  L54():
    st yname = r11;
    complete_cases = ldf `complete.cases`;
    check L55() else D8();
  D8():
    deopt 23 [];
  L55():
    p3 = prom<V +>{
      resids4 = ld resids;
      resids5 = force? resids4;
      checkMissing(resids5);
      return resids5;
    };
    p4 = prom<V +>{
      ls_out9 = ld `ls.out`;
      ls_out10 = force? ls_out9;
      checkMissing(ls_out10);
      c3 = `is.object`(ls_out10);
      if c3 then L1() else L2(ls_out10);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", ls_out10);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(ls_out12):
      r13 = `$`(ls_out12, <sym wt>);
      goto L0(r13);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    r15 = dyn complete_cases(p3, p4);
    check L56() else D9();
  D9():
    deopt 26 [r15];
  L56():
    st good = r15;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L57() else L58();
  L1(r17):
    c4 = `as.logical`(r17);
    if c4 then L61() else L2();
  L57():
    good = ld good;
    check L59() else D10();
  L58():
    r16 = dyn base1(<lang `!`(good)>);
    goto L1(r16);
  D10():
    deopt 30 [good];
  L2():
    goto L4();
  L4():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L70() else L71();
  L59():
    good1 = force? good;
    checkMissing(good1);
    r18 = `!`(good1);
    any = ldf any in base;
    r19 = dyn any(r18);
    check L60() else D11();
  L61():
    warning = ldf warning;
    check L62() else D12();
  D11():
    deopt 34 [r19];
  D12():
    deopt 36 [];
  L5(r23):
    r25 = `!`(r23);
    c8 = `as.logical`(r25);
    if c8 then L77() else L6();
  L60():
    goto L1(r19);
  L62():
    r20 = dyn warning("missing observations deleted");
    check L63() else D13();
  L70():
    ls_out13 = ld `ls.out`;
    check L72() else D16();
  L71():
    r22 = dyn base2(<lang `$`(ls.out, wt)>);
    goto L5(r22);
  D13():
    deopt 38 [r20];
  D16():
    deopt 52 [ls_out13];
  L6():
    goto L13();
  L13():
    ls_out25 = ld `ls.out`;
    check L107() else D25();
  L63():
    resids6 = ld resids;
    check L64() else D14();
  L72():
    ls_out14 = force? ls_out13;
    checkMissing(ls_out14);
    c6 = `is.object`(ls_out14);
    if c6 then L74() else L75(ls_out14);
  L77():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L78() else L79();
  D14():
    deopt 39 [resids6];
  D25():
    deopt 88 [ls_out25];
  L7(r27):
    c11 = `as.logical`(r27);
    if c11 then L90() else L9();
  L64():
    resids7 = force? resids6;
    checkMissing(resids7);
    c5 = `is.object`(resids7);
    if c5 then L65() else L66(resids7);
  L73(dx14):
    c7 = `==`(dx14, NULL);
    goto L5(c7);
  L74():
    dr10 = tryDispatchBuiltin.1("$", ls_out14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L76() else L75(dr10);
  L75(ls_out16):
    r24 = `$`(ls_out16, <sym wt>);
    goto L73(r24);
  L78():
    ls_out17 = ld `ls.out`;
    check L80() else D17();
  L79():
    r26 = dyn base3(<lang `==`(`[`(`$`(ls.out, wt), good), 0.0)>);
    goto L7(r26);
  L107():
    ls_out26 = force? ls_out25;
    checkMissing(ls_out26);
    c14 = `is.object`(ls_out26);
    if c14 then L109() else L110(ls_out26);
  D17():
    deopt 59 [ls_out17];
  L3(dx11):
    st resids = dx11;
    goto L4();
  L9():
    goto L10();
  L10():
    resids10 = ld resids;
    check L94() else D22();
  L65():
    dr8 = tryDispatchBuiltin.1("[", resids7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L67() else L66(dr8);
  L66(resids9):
    good2 = ld good;
    check L68() else D15();
  L76():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L73(dx13);
  L80():
    ls_out18 = force? ls_out17;
    checkMissing(ls_out18);
    c9 = `is.object`(ls_out18);
    if c9 then L82() else L83(ls_out18);
  L90():
    warning1 = ldf warning;
    check L91() else D20();
  L108(dx28):
    c15 = `is.object`(dx28);
    if c15 then L113() else L114(dx28);
  L109():
    dr20 = tryDispatchBuiltin.1("$", ls_out26);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L111() else L110(dr20);
  L110(ls_out28):
    r41 = `$`(ls_out28, <sym qr>);
    goto L108(r41);
  D15():
    deopt 41 [resids9, good2];
  D20():
    deopt 70 [];
  D22():
    deopt 75 [resids10];
  L67():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L3(dx10);
  L68():
    good3 = force? good2;
    __ = ldf `[` in base;
    r21 = dyn __(resids7, good3, <missing>, FALSE);
    goto L3(r21);
  L81(dx16):
    c10 = `is.object`(dx16);
    if c10 then L85() else L86(dx16);
  L82():
    dr12 = tryDispatchBuiltin.1("$", ls_out18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L84() else L83(dr12);
  L83(ls_out20):
    r28 = `$`(ls_out20, <sym wt>);
    goto L81(r28);
  L91():
    r32 = dyn warning1("observations with 0 weight not used in calculating standard deviation");
    check L92() else D21();
  L94():
    resids11 = force? resids10;
    checkMissing(resids11);
    sym4 = ldf sqrt;
    base4 = ldf sqrt in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L95() else L96();
  L111():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L108(dx27);
  L112(dx32):
    st p = dx32;
    nrow = ldf nrow;
    check L116() else D26();
  L113():
    dr22 = tryDispatchBuiltin.1("$", dx28);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L115() else L114(dr22);
  L114(dx30):
    r42 = `$`(dx30, <sym rank>);
    goto L112(r42);
  D21():
    deopt 72 [r32];
  D26():
    deopt 94 [];
  L8(dx20):
    r30 = `==`(dx20, 0.0);
    any1 = ldf any in base;
    r31 = dyn any1(r30);
    check L89() else D19();
  L11(resids14, r35):
    r39 = `*`(resids14, r35);
    st resids = r39;
    goto L13();
  L84():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L81(dx15);
  L85():
    dr14 = tryDispatchBuiltin.1("[", dx16);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L87() else L86(dr14);
  L86(dx18):
    good4 = ld good;
    check L88() else D18();
  L92():
    goto L10();
  L95():
    ls_out21 = ld `ls.out`;
    check L97() else D23();
  L96():
    r34 = dyn base4(<lang `[`(`$`(ls.out, wt), good)>);
    goto L11(resids11, r34);
  L115():
    dx31 = getTryDispatchBuiltinValue(dr22);
    goto L112(dx31);
  L116():
    p5 = prom<V +>{
      resids23 = ld resids;
      resids24 = force? resids23;
      checkMissing(resids24);
      return resids24;
    };
    r44 = dyn nrow(p5);
    check L117() else D27();
  D18():
    deopt 62 [dx18, good4];
  D19():
    deopt 68 [r31];
  D23():
    deopt 77 [resids11, ls_out21];
  D27():
    deopt 96 [r44];
  L87():
    dx19 = getTryDispatchBuiltinValue(dr14);
    goto L8(dx19);
  L88():
    good5 = force? good4;
    __1 = ldf `[` in base;
    r29 = dyn __1(dx18, good5);
    goto L8(r29);
  L89():
    goto L7(r31);
  L97():
    ls_out22 = force? ls_out21;
    checkMissing(ls_out22);
    c12 = `is.object`(ls_out22);
    if c12 then L99() else L100(resids11, ls_out22);
  L117():
    st n = r44;
    sym5 = ldf `rep.int`;
    base5 = ldf `rep.int` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L118() else L119();
  L14(r46):
    st hatdiag = r46;
    array = ldf array;
    check L125() else D30();
  L98(resids18, dx22):
    c13 = `is.object`(dx22);
    if c13 then L102() else L103(resids18, dx22);
  L99():
    dr16 = tryDispatchBuiltin.1("$", ls_out22);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L101() else L100(resids11, dr16);
  L100(resids16, ls_out24):
    r36 = `$`(ls_out24, <sym wt>);
    goto L98(resids16, r36);
  L118():
    d0 = ld d0;
    check L120() else D28();
  L119():
    r45 = dyn base5(NA_REAL, <lang `[`(d0, 1)>);
    goto L14(r45);
  D28():
    deopt 101 [d0];
  D30():
    deopt 110 [];
  L12(resids22, dx26):
    r38 = sqrt(dx26);
    goto L11(resids22, r38);
  L101():
    dx21 = getTryDispatchBuiltinValue(dr16);
    goto L98(resids11, dx21);
  L102():
    dr18 = tryDispatchBuiltin.1("[", dx22);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L104() else L103(resids18, dr18);
  L103(resids20, dx24):
    good6 = ld good;
    check L105() else D24();
  L120():
    d1 = force? d0;
    checkMissing(d1);
    c16 = `is.object`(d1);
    if c16 then L121() else L122(d1);
  L125():
    p6 = prom<V +>{
      d4 = ld d0;
      d5 = force? d4;
      checkMissing(d5);
      return d5;
    };
    r50 = dyn array[, dim](NA_REAL, p6);
    check L126() else D31();
  D24():
    deopt 80 [resids20, dx24, good6];
  D31():
    deopt 114 [r50];
  L15(dx34):
    rep_int = ldf `rep.int` in base;
    r48 = dyn rep_int(NA_REAL, dx34);
    check L124() else D29();
  L104():
    dx25 = getTryDispatchBuiltinValue(dr18);
    goto L12(resids18, dx25);
  L105():
    good7 = force? good6;
    __2 = ldf `[` in base;
    r37 = dyn __2(dx24, good7);
    goto L12(resids20, r37);
  L121():
    dr24 = tryDispatchBuiltin.1("[", d1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L123() else L122(dr24);
  L122(d3):
    __3 = ldf `[` in base;
    r47 = dyn __3(d3, 1);
    goto L15(r47);
  L126():
    st stats = r50;
    yname = ld yname;
    check L127() else D32();
  D29():
    deopt 107 [r48];
  D32():
    deopt 116 [yname];
  L123():
    dx33 = getTryDispatchBuiltinValue(dr24);
    goto L15(dx33);
  L124():
    goto L14(r48);
  L127():
    yname1 = force? yname;
    checkMissing(yname1);
    l = ld stats;
    colnames__ = ldf `colnames<-`;
    check L128() else D33();
  D33():
    deopt 119 [yname1, l, yname1];
  L128():
    r51 = dyn colnames__(l, NULL, yname1);
    check L129() else D34();
  D34():
    deopt 121 [yname1, r51];
  L129():
    st stats = r51;
    stats = ld stats;
    check L130() else D35();
  D35():
    deopt 123 [stats];
  L130():
    stats1 = force? stats;
    checkMissing(stats1);
    st Cooks = stats1;
    st dfits = stats1;
    st studres = stats1;
    st stdres = stats1;
    qr_qy = ldf `qr.qy`;
    check L131() else D36();
  D36():
    deopt 130 [];
  L131():
    p7 = prom<V +>{
      ls_out29 = ld `ls.out`;
      ls_out30 = force? ls_out29;
      checkMissing(ls_out30);
      c17 = `is.object`(ls_out30);
      if c17 then L1() else L2(ls_out30);
    L0(dx36):
      return dx36;
    L1():
      dr26 = tryDispatchBuiltin.1("$", ls_out30);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(ls_out32):
      r52 = `$`(ls_out32, <sym qr>);
      goto L0(r52);
    L3():
      dx35 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx35);
    };
    p19 = prom<V +>{
      rbind = ldf rbind;
      p11 = prom<V +>{
        diag = ldf diag;
        p10 = prom<V +>{
          p8 = ld p;
          p9 = force? p8;
          checkMissing(p9);
          return p9;
        };
        r55 = dyn diag(p10);
        return r55;
      };
      p18 = prom<V +>{
        matrix = ldf matrix;
        p14 = prom<V +>{
          n = ld n;
          n1 = force? n;
          checkMissing(n1);
          p12 = ld p;
          p13 = force? p12;
          checkMissing(p13);
          r57 = `-`(n1, p13);
          return r57;
        };
        p17 = prom<V +>{
          p15 = ld p;
          p16 = force? p15;
          checkMissing(p16);
          return p16;
        };
        r60 = dyn matrix[, nrow, ncol](0.0, p14, p17);
        return r60;
      };
      r62 = dyn rbind(p11, p18);
      return r62;
    };
    r64 = dyn qr_qy(p7, p19);
    check L132() else D37();
  D37():
    deopt 133 [r64];
  L132():
    st q = r64;
    rowSums = ldf rowSums;
    check L133() else D38();
  D38():
    deopt 136 [];
  L133():
    p21 = prom<V +>{
      as_matrix1 = ldf `as.matrix`;
      p20 = prom<V +>{
        q = ld q;
        q1 = force? q;
        checkMissing(q1);
        r65 = `^`(q1, 2.0);
        return r65;
      };
      r67 = dyn as_matrix1(p20);
      return r67;
    };
    r69 = dyn rowSums(p21);
    check L134() else D39();
  D39():
    deopt 138 [r69];
  L134():
    l1 = ld hatdiag;
    c18 = `is.object`(l1);
    if c18 then L135() else L136(r69, l1);
  L16(dx38):
    st hatdiag = dx38;
    sym6 = ldf sqrt;
    base6 = ldf sqrt in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L139() else L140();
  L135():
    dr28 = tryDispatchBuiltin.0("[<-", l1, r69);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L137() else L136(r69, dr28);
  L136(r71, l3):
    good8 = ld good;
    check L138() else D40();
  D40():
    deopt 140 [r71, l3, r69, good8];
  L17(r76):
    st stddev = r76;
    matrix1 = ldf matrix;
    check L145() else D45();
  L137():
    dx37 = getTryDispatchBuiltinValue(dr28);
    goto L16(dx37);
  L138():
    good9 = force? good8;
    ___ = ldf `[<-` in base;
    r74 = dyn ___(l3, r69, good9);
    goto L16(r74);
  L139():
    colSums = ldf colSums;
    check L141() else D41();
  L140():
    r75 = dyn base6(<lang `/`(colSums(as.matrix(`^`(resids, 2.0))), `(`(`-`(n, p)))>);
    goto L17(r75);
  D41():
    deopt 146 [];
  D45():
    deopt 156 [];
  L141():
    p23 = prom<V +>{
      as_matrix2 = ldf `as.matrix`;
      p22 = prom<V +>{
        resids25 = ld resids;
        resids26 = force? resids25;
        checkMissing(resids26);
        r77 = `^`(resids26, 2.0);
        return r77;
      };
      r79 = dyn as_matrix2(p22);
      return r79;
    };
    r81 = dyn colSums(p23);
    check L142() else D42();
  L145():
    p26 = prom<V +>{
      stddev = ld stddev;
      stddev1 = force? stddev;
      checkMissing(stddev1);
      return stddev1;
    };
    p27 = prom<V +>{
      sym7 = ldf sum;
      base7 = ldf sum in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r87):
      return r87;
    L1():
      good10 = ld good;
      good11 = force? good10;
      checkMissing(good11);
      sum = ldf sum in base;
      r88 = dyn sum(good11);
      goto L0(r88);
    L2():
      r86 = dyn base7(<sym good>);
      goto L0(r86);
    };
    p29 = prom<V +>{
      ncol = ldf ncol;
      p28 = prom<V +>{
        resids27 = ld resids;
        resids28 = force? resids27;
        checkMissing(resids28);
        return resids28;
      };
      r91 = dyn ncol(p28);
      return r91;
    };
    r93 = dyn matrix1[, nrow, ncol, byrow](p26, p27, p29, TRUE);
    check L146() else D46();
  D42():
    deopt 148 [r81];
  D46():
    deopt 164 [r93];
  L142():
    n2 = ld n;
    check L143() else D43();
  L146():
    st stddevmat = r93;
    resids29 = ld resids;
    check L147() else D47();
  D43():
    deopt 148 [r81, n2];
  D47():
    deopt 166 [resids29];
  L143():
    n3 = force? n2;
    checkMissing(n3);
    p24 = ld p;
    check L144() else D44();
  L147():
    resids30 = force? resids29;
    checkMissing(resids30);
    sym8 = ldf sqrt;
    base8 = ldf sqrt in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L148() else L149();
  D44():
    deopt 149 [r81, n3, p24];
  L18(resids33, r95):
    stddevmat = ld stddevmat;
    check L155() else D50();
  L144():
    p25 = force? p24;
    checkMissing(p25);
    r82 = `-`(n3, p25);
    r83 = `/`(r81, r82);
    r84 = sqrt(r83);
    goto L17(r84);
  L148():
    hatdiag = ld hatdiag;
    check L150() else D48();
  L149():
    r94 = dyn base8(<lang `-`(1.0, `[`(hatdiag, good))>);
    goto L18(resids30, r94);
  D48():
    deopt 169 [resids30, 1.0, hatdiag];
  D50():
    deopt 175 [resids33, r95, stddevmat];
  L150():
    hatdiag1 = force? hatdiag;
    checkMissing(hatdiag1);
    c19 = `is.object`(hatdiag1);
    if c19 then L151() else L152(resids30, 1.0, hatdiag1);
  L155():
    stddevmat1 = force? stddevmat;
    checkMissing(stddevmat1);
    r103 = `*`(r95, stddevmat1);
    r104 = `/`(resids33, r103);
    l4 = ld stdres;
    c20 = `is.object`(l4);
    if c20 then L156() else L157(r104, l4);
  L19(resids37, r99, dx40):
    r101 = `-`(r99, dx40);
    r102 = sqrt(r101);
    goto L18(resids37, r102);
  L20(dx42):
    st stdres = dx42;
    stdres = ld stdres;
    check L160() else D52();
  L151():
    dr30 = tryDispatchBuiltin.1("[", hatdiag1);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L153() else L152(resids30, 1.0, dr30);
  L152(resids35, r97, hatdiag3):
    good12 = ld good;
    check L154() else D49();
  L156():
    dr32 = tryDispatchBuiltin.0("[<-", l4, r104);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L158() else L157(r104, dr32);
  L157(r106, l6):
    good14 = ld good;
    check L159() else D51();
  D49():
    deopt 171 [resids35, r97, hatdiag3, good12];
  D51():
    deopt 180 [r106, l6, r104, good14];
  D52():
    deopt 186 [stdres];
  L153():
    dx39 = getTryDispatchBuiltinValue(dr30);
    goto L19(resids30, 1.0, dx39);
  L154():
    good13 = force? good12;
    __4 = ldf `[` in base;
    r100 = dyn __4(hatdiag3, good13);
    goto L19(resids35, r97, r100);
  L158():
    dx41 = getTryDispatchBuiltinValue(dr32);
    goto L20(dx41);
  L159():
    good15 = force? good14;
    ___1 = ldf `[<-` in base;
    r109 = dyn ___1(l4, good15, <missing>, r104);
    goto L20(r109);
  L160():
    stdres1 = force? stdres;
    checkMissing(stdres1);
    c21 = `is.object`(stdres1);
    if c21 then L161() else L162(stdres1);
  L21(dx44):
    stddevmat2 = ld stddevmat;
    check L165() else D54();
  L161():
    dr34 = tryDispatchBuiltin.1("[", stdres1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L163() else L162(dr34);
  L162(stdres3):
    good16 = ld good;
    check L164() else D53();
  D53():
    deopt 188 [stdres3, good16];
  D54():
    deopt 192 [dx44, stddevmat2];
  L163():
    dx43 = getTryDispatchBuiltinValue(dr34);
    goto L21(dx43);
  L164():
    good17 = force? good16;
    __5 = ldf `[` in base;
    r110 = dyn __5(stdres1, good17, <missing>);
    goto L21(r110);
  L165():
    stddevmat3 = force? stddevmat2;
    checkMissing(stddevmat3);
    r111 = `*`(dx44, stddevmat3);
    sym9 = ldf sqrt;
    base9 = ldf sqrt in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L166() else L167();
  L22(r115, r116):
    r145 = `/`(r115, r116);
    l7 = ld studres;
    c23 = `is.object`(l7);
    if c23 then L179() else L180(r145, l7);
  L166():
    n4 = ld n;
    check L168() else D55();
  L167():
    r114 = dyn base9(<lang `/`(`(`(`-`(`*`(`(`(`-`(n, p)), `^`(stddevmat, 2.0)), `/`(`^`(resids, 2.0), `(`(`-`(1.0, `[`(hatdiag, good)))))), `(`(`-`(`-`(n, p), 1.0)))>);
    goto L22(r111, r114);
  D55():
    deopt 195 [r111, n4];
  L24(dx48):
    st studres = dx48;
    sym10 = ldf sqrt;
    base10 = ldf sqrt in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L183() else L184();
  L168():
    n5 = force? n4;
    checkMissing(n5);
    p30 = ld p;
    check L169() else D56();
  L179():
    dr38 = tryDispatchBuiltin.0("[<-", l7, r145);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L181() else L180(r145, dr38);
  L180(r147, l9):
    good20 = ld good;
    check L182() else D63();
  D56():
    deopt 196 [r111, n5, p30];
  D63():
    deopt 223 [r147, l9, r145, good20];
  L25(r152):
    studres = ld studres;
    check L195() else D68();
  L169():
    p31 = force? p30;
    checkMissing(p31);
    r117 = `-`(n5, p31);
    stddevmat4 = ld stddevmat;
    check L170() else D57();
  L181():
    dx47 = getTryDispatchBuiltinValue(dr38);
    goto L24(dx47);
  L182():
    good21 = force? good20;
    ___2 = ldf `[<-` in base;
    r150 = dyn ___2(l7, good21, <missing>, r145);
    goto L24(r150);
  L183():
    hatdiag8 = ld hatdiag;
    check L185() else D64();
  L184():
    r151 = dyn base10(<lang `/`(`[`(hatdiag, good), `(`(`-`(1.0, `[`(hatdiag, good))))>);
    goto L25(r151);
  D57():
    deopt 198 [r111, r117, stddevmat4];
  D64():
    deopt 230 [hatdiag8];
  D68():
    deopt 242 [r152, studres];
  L170():
    stddevmat5 = force? stddevmat4;
    checkMissing(stddevmat5);
    r118 = `^`(stddevmat5, 2.0);
    r119 = `*`(r117, r118);
    resids38 = ld resids;
    check L171() else D58();
  L185():
    hatdiag9 = force? hatdiag8;
    checkMissing(hatdiag9);
    c24 = `is.object`(hatdiag9);
    if c24 then L186() else L187(hatdiag9);
  L195():
    studres1 = force? studres;
    checkMissing(studres1);
    c26 = `is.object`(studres1);
    if c26 then L196() else L197(r152, studres1);
  D58():
    deopt 202 [r111, r119, resids38];
  L26(dx50):
    hatdiag12 = ld hatdiag;
    check L190() else D66();
  L28(r165, dx58):
    r167 = `*`(r165, dx58);
    l10 = ld dfits;
    c27 = `is.object`(l10);
    if c27 then L200() else L201(r167, l10);
  L171():
    resids39 = force? resids38;
    checkMissing(resids39);
    r120 = `^`(resids39, 2.0);
    hatdiag4 = ld hatdiag;
    check L172() else D59();
  L186():
    dr40 = tryDispatchBuiltin.1("[", hatdiag9);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L188() else L187(dr40);
  L187(hatdiag11):
    good22 = ld good;
    check L189() else D65();
  L196():
    dr44 = tryDispatchBuiltin.1("[", studres1);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L198() else L197(r152, dr44);
  L197(r163, studres3):
    good26 = ld good;
    check L199() else D69();
  D59():
    deopt 206 [r111, r119, r120, 1.0, hatdiag4];
  D65():
    deopt 232 [hatdiag11, good22];
  D66():
    deopt 235 [dx50, 1.0, hatdiag12];
  D69():
    deopt 244 [r163, studres3, good26];
  L29(dx60):
    st dfits = dx60;
    stdres4 = ld stdres;
    check L204() else D71();
  L172():
    hatdiag5 = force? hatdiag4;
    checkMissing(hatdiag5);
    c22 = `is.object`(hatdiag5);
    if c22 then L173() else L174(r111, r119, r120, 1.0, hatdiag5);
  L188():
    dx49 = getTryDispatchBuiltinValue(dr40);
    goto L26(dx49);
  L189():
    good23 = force? good22;
    __7 = ldf `[` in base;
    r153 = dyn __7(hatdiag11, good23);
    goto L26(r153);
  L190():
    hatdiag13 = force? hatdiag12;
    checkMissing(hatdiag13);
    c25 = `is.object`(hatdiag13);
    if c25 then L191() else L192(dx50, 1.0, hatdiag13);
  L198():
    dx57 = getTryDispatchBuiltinValue(dr44);
    goto L28(r152, dx57);
  L199():
    good27 = force? good26;
    __9 = ldf `[` in base;
    r166 = dyn __9(studres1, good27, <missing>);
    goto L28(r163, r166);
  L200():
    dr46 = tryDispatchBuiltin.0("[<-", l10, r167);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L202() else L201(r167, dr46);
  L201(r169, l12):
    good28 = ld good;
    check L203() else D70();
  D70():
    deopt 251 [r169, l12, r167, good28];
  D71():
    deopt 257 [stdres4];
  L23(r133, r134, r135, r136, dx46):
    r138 = `-`(r136, dx46);
    r139 = `/`(r135, r138);
    r140 = `-`(r134, r139);
    n6 = ld n;
    check L177() else D61();
  L27(dx55, r157, dx56):
    r159 = `-`(r157, dx56);
    r160 = `/`(dx55, r159);
    r161 = sqrt(r160);
    goto L25(r161);
  L173():
    dr36 = tryDispatchBuiltin.1("[", hatdiag5);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L175() else L174(r111, r119, r120, 1.0, dr36);
  L174(r125, r126, r127, r128, hatdiag7):
    good18 = ld good;
    check L176() else D60();
  L191():
    dr42 = tryDispatchBuiltin.1("[", hatdiag13);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L193() else L192(dx50, 1.0, dr42);
  L192(dx52, r155, hatdiag15):
    good24 = ld good;
    check L194() else D67();
  L202():
    dx59 = getTryDispatchBuiltinValue(dr46);
    goto L29(dx59);
  L203():
    good29 = force? good28;
    ___3 = ldf `[<-` in base;
    r172 = dyn ___3(l10, good29, <missing>, r167);
    goto L29(r172);
  L204():
    stdres5 = force? stdres4;
    checkMissing(stdres5);
    c28 = `is.object`(stdres5);
    if c28 then L205() else L206(stdres5);
  D60():
    deopt 208 [r125, r126, r127, r128, hatdiag7, good18];
  D61():
    deopt 213 [r133, r140, n6];
  D67():
    deopt 237 [dx52, r155, hatdiag15, good24];
  L30(dx62):
    r174 = `^`(dx62, 2.0);
    hatdiag16 = ld hatdiag;
    check L209() else D73();
  L175():
    dx45 = getTryDispatchBuiltinValue(dr36);
    goto L23(r111, r119, r120, 1.0, dx45);
  L176():
    good19 = force? good18;
    __6 = ldf `[` in base;
    r137 = dyn __6(hatdiag7, good19);
    goto L23(r125, r126, r127, r128, r137);
  L177():
    n7 = force? n6;
    checkMissing(n7);
    p32 = ld p;
    check L178() else D62();
  L193():
    dx54 = getTryDispatchBuiltinValue(dr42);
    goto L27(dx50, 1.0, dx54);
  L194():
    good25 = force? good24;
    __8 = ldf `[` in base;
    r158 = dyn __8(hatdiag15, good25);
    goto L27(dx52, r155, r158);
  L205():
    dr48 = tryDispatchBuiltin.1("[", stdres5);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L207() else L206(dr48);
  L206(stdres7):
    good30 = ld good;
    check L208() else D72();
  D62():
    deopt 214 [r133, r140, n7, p32];
  D72():
    deopt 259 [stdres7, good30];
  D73():
    deopt 265 [r174, hatdiag16];
  L178():
    p33 = force? p32;
    checkMissing(p33);
    r141 = `-`(n7, p33);
    r142 = `-`(r141, 1.0);
    r143 = `/`(r140, r142);
    r144 = sqrt(r143);
    goto L22(r133, r144);
  L207():
    dx61 = getTryDispatchBuiltinValue(dr48);
    goto L30(dx61);
  L208():
    good31 = force? good30;
    __10 = ldf `[` in base;
    r173 = dyn __10(stdres5, good31, <missing>);
    goto L30(r173);
  L209():
    hatdiag17 = force? hatdiag16;
    checkMissing(hatdiag17);
    c29 = `is.object`(hatdiag17);
    if c29 then L210() else L211(r174, hatdiag17);
  L31(r178, dx64):
    r180 = `*`(r178, dx64);
    p34 = ld p;
    check L214() else D75();
  L210():
    dr50 = tryDispatchBuiltin.1("[", hatdiag17);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L212() else L211(r174, dr50);
  L211(r176, hatdiag19):
    good32 = ld good;
    check L213() else D74();
  D74():
    deopt 267 [r176, hatdiag19, good32];
  D75():
    deopt 270 [r180, p34];
  L212():
    dx63 = getTryDispatchBuiltinValue(dr50);
    goto L31(r174, dx63);
  L213():
    good33 = force? good32;
    __11 = ldf `[` in base;
    r179 = dyn __11(hatdiag19, good33);
    goto L31(r176, r179);
  L214():
    p35 = force? p34;
    checkMissing(p35);
    r181 = `/`(r180, p35);
    hatdiag20 = ld hatdiag;
    check L215() else D76();
  D76():
    deopt 273 [r181, 1.0, hatdiag20];
  L215():
    hatdiag21 = force? hatdiag20;
    checkMissing(hatdiag21);
    c30 = `is.object`(hatdiag21);
    if c30 then L216() else L217(r181, 1.0, hatdiag21);
  L32(r188, r189, dx66):
    r191 = `-`(r189, dx66);
    r192 = `/`(r188, r191);
    l13 = ld Cooks;
    c31 = `is.object`(l13);
    if c31 then L220() else L221(r192, l13);
  L216():
    dr52 = tryDispatchBuiltin.1("[", hatdiag21);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L218() else L217(r181, 1.0, dr52);
  L217(r184, r185, hatdiag23):
    good34 = ld good;
    check L219() else D77();
  D77():
    deopt 275 [r184, r185, hatdiag23, good34];
  L33(dx68):
    st Cooks = dx68;
    ncol1 = ldf ncol;
    check L224() else D79();
  L218():
    dx65 = getTryDispatchBuiltinValue(dr52);
    goto L32(r181, 1.0, dx65);
  L219():
    good35 = force? good34;
    __12 = ldf `[` in base;
    r190 = dyn __12(hatdiag23, good35);
    goto L32(r184, r185, r190);
  L220():
    dr54 = tryDispatchBuiltin.0("[<-", l13, r192);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L222() else L221(r192, dr54);
  L221(r194, l15):
    good36 = ld good;
    check L223() else D78();
  D78():
    deopt 281 [r194, l15, r192, good36];
  D79():
    deopt 288 [];
  L222():
    dx67 = getTryDispatchBuiltinValue(dr54);
    goto L33(dx67);
  L223():
    good37 = force? good36;
    ___4 = ldf `[<-` in base;
    r197 = dyn ___4(l13, good37, <missing>, r192);
    goto L33(r197);
  L224():
    p36 = prom<V +>{
      resids40 = ld resids;
      resids41 = force? resids40;
      checkMissing(resids41);
      return resids41;
    };
    r199 = dyn ncol1(p36);
    check L225() else D80();
  D80():
    deopt 290 [r199];
  L225():
    r200 = `==`(r199, 1.0);
    c32 = `as.logical`(r200);
    if c32 then L226() else L34(c32);
  L34(c34):
    c42 = `as.logical`(c34);
    if c42 then L231() else L36();
  L226():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L227() else L228();
  L35(c37, r202):
    c39 = `as.logical`(r202);
    c40 = `&&`(c37, c39);
    goto L34(c40);
  L36():
    goto L37();
  L37():
    as_matrix3 = ldf `as.matrix`;
    check L241() else D90();
  L227():
    yname2 = ld yname;
    check L229() else D81();
  L228():
    r201 = dyn base11(<sym yname>);
    goto L35(c32, r201);
  L231():
    as_vector = ldf `as.vector`;
    check L232() else D82();
  D81():
    deopt 294 [c32, yname2];
  D82():
    deopt 299 [];
  D90():
    deopt 321 [];
  L229():
    yname3 = force? yname2;
    checkMissing(yname3);
    c38 = `==`(yname3, NULL);
    goto L35(c32, c38);
  L232():
    p37 = prom<V +>{
      stdres8 = ld stdres;
      stdres9 = force? stdres8;
      checkMissing(stdres9);
      return stdres9;
    };
    r204 = dyn as_vector(p37);
    check L233() else D83();
  L241():
    p45 = prom<V +>{
      ls_out33 = ld `ls.out`;
      ls_out34 = force? ls_out33;
      checkMissing(ls_out34);
      c43 = `is.object`(ls_out34);
      if c43 then L2() else L3(ls_out34);
    L1(dx70):
      c44 = `is.object`(dx70);
      if c44 then L6() else L7(dx70);
    L2():
      dr56 = tryDispatchBuiltin.1("$", ls_out34);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L4() else L3(dr56);
    L3(ls_out36):
      r212 = `$`(ls_out36, <sym qr>);
      goto L1(r212);
    L4():
      dx69 = getTryDispatchBuiltinValue(dr56);
      goto L1(dx69);
    L5(dx74):
      c45 = `is.object`(dx74);
      if c45 then L9() else L10(dx74);
    L6():
      dr58 = tryDispatchBuiltin.1("$", dx70);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L8() else L7(dr58);
    L7(dx72):
      r213 = `$`(dx72, <sym qr>);
      goto L5(r213);
    L0(dx78):
      return dx78;
    L8():
      dx73 = getTryDispatchBuiltinValue(dr58);
      goto L5(dx73);
    L9():
      dr60 = tryDispatchBuiltin.1("[", dx74);
      dc30 = getTryDispatchBuiltinDispatched(dr60);
      if dc30 then L11() else L10(dr60);
    L10(dx76):
      p41 = ld p;
      p42 = force? p41;
      checkMissing(p42);
      r214 = `:`(1, p42);
      p43 = ld p;
      p44 = force? p43;
      checkMissing(p44);
      r215 = `:`(1, p44);
      __13 = ldf `[` in base;
      r216 = dyn __13(dx76, r214, r215);
      goto L0(r216);
    L11():
      dx77 = getTryDispatchBuiltinValue(dr60);
      goto L0(dx77);
    };
    r218 = dyn as_matrix3(p45);
    check L242() else D91();
  D83():
    deopt 301 [r204];
  D91():
    deopt 323 [r218];
  L233():
    st stdres = r204;
    as_vector1 = ldf `as.vector`;
    check L234() else D84();
  L242():
    st qr = r218;
    l16 = ld qr;
    c46 = `is.object`(l16);
    if c46 then L243() else L244(0.0, l16);
  D84():
    deopt 304 [];
  L38(dx80):
    st qr = dx80;
    sym12 = ldf tcrossprod;
    base12 = ldf tcrossprod in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L250() else L251();
  L234():
    p38 = prom<V +>{
      Cooks = ld Cooks;
      Cooks1 = force? Cooks;
      checkMissing(Cooks1);
      return Cooks1;
    };
    r206 = dyn as_vector1(p38);
    check L235() else D85();
  L243():
    dr62 = tryDispatchBuiltin.0("[<-", l16, 0.0);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L245() else L244(0.0, dr62);
  L244(r220, l18):
    row = ldf row;
    check L246() else D92();
  D85():
    deopt 306 [r206];
  D92():
    deopt 329 [r220, l18, 0.0];
  L39(r230):
    st `covmat.unscaled` = r230;
    sym13 = ldf list;
    base13 = ldf list in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L255() else L256();
  L235():
    st Cooks = r206;
    as_vector2 = ldf `as.vector`;
    check L236() else D86();
  L245():
    dx79 = getTryDispatchBuiltinValue(dr62);
    goto L38(dx79);
  L246():
    p46 = prom<V +>{
      qr = ld qr;
      qr1 = force? qr;
      checkMissing(qr1);
      return qr1;
    };
    r224 = dyn row(p46);
    check L247() else D93();
  L250():
    solve = ldf solve;
    check L252() else D96();
  L251():
    r229 = dyn base12(<lang solve(qr)>);
    goto L39(r229);
  D86():
    deopt 309 [];
  D93():
    deopt 331 [r220, l18, 0.0, r224];
  D96():
    deopt 341 [];
  L40(r235):
    l19 = ld `covmat.unscaled`;
    dimnames__ = ldf `dimnames<-`;
    check L260() else D102();
  L236():
    p39 = prom<V +>{
      studres4 = ld studres;
      studres5 = force? studres4;
      checkMissing(studres5);
      return studres5;
    };
    r208 = dyn as_vector2(p39);
    check L237() else D87();
  L247():
    col = ldf col;
    check L248() else D94();
  L252():
    p48 = prom<V +>{
      qr4 = ld qr;
      qr5 = force? qr4;
      checkMissing(qr5);
      return qr5;
    };
    r232 = dyn solve(p48);
    check L253() else D97();
  L255():
    xnames = ld xnames;
    check L257() else D99();
  L256():
    r234 = dyn base13(<sym xnames>, <sym xnames>);
    goto L40(r234);
  D87():
    deopt 311 [r208];
  D94():
    deopt 332 [r220, l18, 0.0, r224];
  D97():
    deopt 343 [r232];
  D99():
    deopt 349 [xnames];
  D102():
    deopt 356 [r235, l19, r235];
  L237():
    st studres = r208;
    as_vector3 = ldf `as.vector`;
    check L238() else D88();
  L248():
    p47 = prom<V +>{
      qr2 = ld qr;
      qr3 = force? qr2;
      checkMissing(qr3);
      return qr3;
    };
    r226 = dyn col(p47);
    check L249() else D95();
  L253():
    tcrossprod = ldf tcrossprod in base;
    r233 = dyn tcrossprod(r232);
    check L254() else D98();
  L257():
    xnames1 = force? xnames;
    checkMissing(xnames1);
    xnames2 = ld xnames;
    check L258() else D100();
  L260():
    r237 = dyn dimnames__(l19, NULL, r235);
    check L261() else D103();
  D88():
    deopt 314 [];
  D95():
    deopt 334 [r220, l18, 0.0, r224, r226];
  D98():
    deopt 345 [r233];
  D100():
    deopt 351 [xnames2];
  D103():
    deopt 358 [r235, r237];
  L238():
    p40 = prom<V +>{
      dfits = ld dfits;
      dfits1 = force? dfits;
      checkMissing(dfits1);
      return dfits1;
    };
    r210 = dyn as_vector3(p40);
    check L239() else D89();
  L249():
    r227 = `>`(r224, r226);
    ___5 = ldf `[<-` in base;
    r228 = dyn ___5(l18, 0.0, r227);
    goto L38(r228);
  L254():
    goto L39(r233);
  L258():
    xnames3 = force? xnames2;
    checkMissing(xnames3);
    list = ldf list in base;
    r236 = dyn list(xnames1, xnames3);
    check L259() else D101();
  L261():
    st `covmat.unscaled` = r237;
    sym14 = ldf sum;
    base14 = ldf sum in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L262() else L263();
  D89():
    deopt 316 [r210];
  D101():
    deopt 354 [r236];
  L41(r239):
    covmat_unscaled = ld `covmat.unscaled`;
    check L266() else D106();
  L239():
    st dfits = r210;
    goto L37();
  L259():
    goto L40(r236);
  L262():
    stddev2 = ld stddev;
    check L264() else D104();
  L263():
    r238 = dyn base14(<lang `^`(stddev, 2.0)>);
    goto L41(r238);
  D104():
    deopt 362 [stddev2];
  D106():
    deopt 367 [r239, covmat_unscaled];
  L264():
    stddev3 = force? stddev2;
    checkMissing(stddev3);
    r240 = `^`(stddev3, 2.0);
    sum1 = ldf sum in base;
    r241 = dyn sum1(r240);
    check L265() else D105();
  L266():
    covmat_unscaled1 = force? covmat_unscaled;
    checkMissing(covmat_unscaled1);
    r242 = `*`(r239, covmat_unscaled1);
    st `covmat.scaled` = r242;
    covmat_scaled = ld `covmat.scaled`;
    check L267() else D107();
  D105():
    deopt 367 [r241];
  D107():
    deopt 371 [covmat_scaled];
  L265():
    goto L41(r241);
  L267():
    covmat_scaled1 = force? covmat_scaled;
    checkMissing(covmat_scaled1);
    sym15 = ldf sqrt;
    base15 = ldf sqrt in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L268() else L269();
  L42(covmat_scaled4, r244):
    r253 = `/`(covmat_scaled4, r244);
    st cormat = r253;
    outer1 = ldf outer;
    check L272() else D110();
  L268():
    outer = ldf outer;
    check L270() else D108();
  L269():
    r243 = dyn base15(<lang outer(diag(covmat.scaled), diag(covmat.scaled))>);
    goto L42(covmat_scaled1, r243);
  D108():
    deopt 374 [covmat_scaled1];
  D110():
    deopt 382 [];
  L270():
    p50 = prom<V +>{
      diag1 = ldf diag;
      p49 = prom<V +>{
        covmat_scaled5 = ld `covmat.scaled`;
        covmat_scaled6 = force? covmat_scaled5;
        checkMissing(covmat_scaled6);
        return covmat_scaled6;
      };
      r246 = dyn diag1(p49);
      return r246;
    };
    p52 = prom<V +>{
      diag2 = ldf diag;
      p51 = prom<V +>{
        covmat_scaled7 = ld `covmat.scaled`;
        covmat_scaled8 = force? covmat_scaled7;
        checkMissing(covmat_scaled8);
        return covmat_scaled8;
      };
      r249 = dyn diag2(p51);
      return r249;
    };
    r251 = dyn outer(p50, p52);
    check L271() else D109();
  L272():
    p54 = prom<V +>{
      sym16 = ldf sqrt;
      base16 = ldf sqrt in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L1() else L2();
    L0(r255):
      return r255;
    L1():
      diag3 = ldf diag;
      p53 = prom<V +>{
        covmat_unscaled2 = ld `covmat.unscaled`;
        covmat_unscaled3 = force? covmat_unscaled2;
        checkMissing(covmat_unscaled3);
        return covmat_unscaled3;
      };
      r257 = dyn diag3(p53);
      r258 = sqrt(r257);
      goto L0(r258);
    L2():
      r254 = dyn base16(<lang diag(covmat.unscaled)>);
      goto L0(r254);
    };
    p55 = prom<V +>{
      stddev4 = ld stddev;
      stddev5 = force? stddev4;
      checkMissing(stddev5);
      return stddev5;
    };
    r261 = dyn outer1(p54, p55);
    check L273() else D111();
  D109():
    deopt 377 [covmat_scaled1, r251];
  D111():
    deopt 385 [r261];
  L271():
    r252 = sqrt(r251);
    goto L42(covmat_scaled1, r252);
  L273():
    st stderr = r261;
    sym17 = ldf list;
    base17 = ldf list in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L274() else L275();
  L43(r263):
    l20 = ld stderr;
    dimnames__1 = ldf `dimnames<-`;
    check L279() else D115();
  L274():
    xnames4 = ld xnames;
    check L276() else D112();
  L275():
    r262 = dyn base17(<sym xnames>, <sym yname>);
    goto L43(r262);
  D112():
    deopt 389 [xnames4];
  D115():
    deopt 396 [r263, l20, r263];
  L276():
    xnames5 = force? xnames4;
    checkMissing(xnames5);
    yname4 = ld yname;
    check L277() else D113();
  L279():
    r265 = dyn dimnames__1(l20, NULL, r263);
    check L280() else D116();
  D113():
    deopt 391 [yname4];
  D116():
    deopt 398 [r263, r265];
  L277():
    yname5 = force? yname4;
    checkMissing(yname5);
    list1 = ldf list in base;
    r264 = dyn list1(xnames5, yname5);
    check L278() else D114();
  L280():
    st stderr = r265;
    sym18 = ldf list;
    base18 = ldf list in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L281() else L282();
  D114():
    deopt 394 [r264];
  L44(r267):
    popenv;
    return r267;
  L278():
    goto L43(r264);
  L281():
    stddev6 = ld stddev;
    check L283() else D117();
  L282():
    r266 = dyn base18[`std.dev`, hat, `std.res`, `stud.res`, cooks, dfits, correlation, `std.err`, `cov.scaled`, `cov.unscaled`](<sym stddev>, <sym hatdiag>, <sym stdres>, <sym studres>, <sym Cooks>, <sym dfits>, <sym cormat>, <sym stderr>, <sym covmat.scaled>, <sym covmat.unscaled>);
    goto L44(r266);
  D117():
    deopt 402 [stddev6];
  L283():
    stddev7 = force? stddev6;
    checkMissing(stddev7);
    hatdiag24 = ld hatdiag;
    check L284() else D118();
  D118():
    deopt 405 [hatdiag24];
  L284():
    hatdiag25 = force? hatdiag24;
    checkMissing(hatdiag25);
    stdres10 = ld stdres;
    check L285() else D119();
  D119():
    deopt 408 [stdres10];
  L285():
    stdres11 = force? stdres10;
    checkMissing(stdres11);
    studres6 = ld studres;
    check L286() else D120();
  D120():
    deopt 411 [studres6];
  L286():
    studres7 = force? studres6;
    checkMissing(studres7);
    Cooks2 = ld Cooks;
    check L287() else D121();
  D121():
    deopt 414 [Cooks2];
  L287():
    Cooks3 = force? Cooks2;
    checkMissing(Cooks3);
    dfits2 = ld dfits;
    check L288() else D122();
  D122():
    deopt 417 [dfits2];
  L288():
    dfits3 = force? dfits2;
    checkMissing(dfits3);
    cormat = ld cormat;
    check L289() else D123();
  D123():
    deopt 420 [cormat];
  L289():
    cormat1 = force? cormat;
    checkMissing(cormat1);
    stderr = ld stderr;
    check L290() else D124();
  D124():
    deopt 423 [stderr];
  L290():
    stderr1 = force? stderr;
    checkMissing(stderr1);
    covmat_scaled9 = ld `covmat.scaled`;
    check L291() else D125();
  D125():
    deopt 426 [covmat_scaled9];
  L291():
    covmat_scaled10 = force? covmat_scaled9;
    checkMissing(covmat_scaled10);
    covmat_unscaled4 = ld `covmat.unscaled`;
    check L292() else D126();
  D126():
    deopt 429 [covmat_unscaled4];
  L292():
    covmat_unscaled5 = force? covmat_unscaled4;
    checkMissing(covmat_unscaled5);
    list2 = ldf list in base;
    r268 = dyn list2(stddev7, hatdiag25, stdres11, studres7, Cooks3, dfits3, cormat1, stderr1, covmat_scaled10, covmat_unscaled5);
    check L293() else D127();
  D127():
    deopt 433 [r268];
  L293():
    goto L44(r268);
  }
}