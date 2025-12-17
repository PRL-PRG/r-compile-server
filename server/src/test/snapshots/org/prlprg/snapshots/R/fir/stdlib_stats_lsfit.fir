fun main() {
  () -+> V { reg r:cls, reg __:cls, reg r1:V, reg r2:cls, reg r3:V, reg lsfit:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg gl:cls, reg r6:V, reg unclass:cls, reg r7:V, reg p:p(V +), reg weight:*, reg weight1:V, reg p1:p(V +), reg r10:V, reg ls_print:cls, reg lsD9:*, reg lsD10:V, reg p2:p(V +), reg r12:V |
    mkenv;
    r = clos inner3971252723;
    st lsfit = r;
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
    r3 = dyn r2[, echo]("lm", FALSE);
    check L2() else D2();
  D2():
    deopt 12 [r3];
  L2():
    lsfit = ldf lsfit;
    check L3() else D3();
  D3():
    deopt 14 [];
  L3():
    p = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      gl = ldf gl;
      r6 = dyn gl(2.0, 10.0);
      unclass = ldf unclass in base;
      r7 = dyn unclass(r6);
      goto L0(r7);
    L2():
      r4 = dyn base(<lang gl(2.0, 10.0)>);
      goto L0(r4);
    };
    p1 = prom<V +>{
      weight = ld weight;
      weight1 = force? weight;
      checkMissing(weight1);
      return weight1;
    };
    r10 = dyn lsfit[x, y](p, p1);
    check L4() else D4();
  D4():
    deopt 19 [r10];
  L4():
    st lsD9 = r10;
    ls_print = ldf `ls.print`;
    check L5() else D5();
  D5():
    deopt 22 [];
  L5():
    p2 = prom<V +>{
      lsD9 = ld lsD9;
      lsD10 = force? lsD9;
      checkMissing(lsD10);
      return lsD10;
    };
    r12 = dyn ls_print(p2);
    check L6() else D6();
  D6():
    deopt 24 [r12];
  L6():
    popenv;
    return r12;
  }
}
fun inner3971252723(x, y, wt, intercept, tolerance, yname) {
  (reg x:*, reg y:*, reg wt:*, reg intercept:*, reg tolerance:*, reg yname:*) -+> V { var x:*, var y:*, var wt:*, reg wt_isMissing:L, reg wt_orDefault:*, var intercept:*, reg intercept_isMissing:L, reg intercept_orDefault:*, var tolerance:*, reg tolerance_isMissing:L, reg tolerance_orDefault:*, var yname:*, reg yname_isMissing:L, reg yname_orDefault:*, reg as_matrix:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg as_matrix1:cls, reg y1:*, reg y2:V, reg p1:p(V +), reg r3:V, reg colnames:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg xnames:*, reg xnames1:V, reg c:V, reg c1:L, reg ncol:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r9:V, reg r10:V, reg c2:L, reg r11:V, reg paste0:cls, reg ncol1:cls, reg x7:*, reg x8:V, reg p4:p(V +), reg r13:V, reg r14:V, reg p5:p(V +), reg r16:V, reg intercept1:*, reg intercept2:V, reg c3:L, reg cbind:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg xnames2:*, reg xnames3:V, reg c4:cls, reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r24:V, reg r25:V, reg yname1:*, reg yname2:V, reg c5:V, reg c6:L, reg c8:V, reg ncol2:cls, reg y3:*, reg y4:V, reg p7:p(V +), reg r27:V, reg r28:V, reg c9:L, reg c10:V, reg c12:L, reg paste1:cls, reg ncol3:cls, reg y5:*, reg y6:V, reg p8:p(V +), reg r30:V, reg r31:V, reg p9:p(V +), reg r33:V, reg complete_cases:cls, reg x11:*, reg x12:V, reg p10:p(V +), reg y7:*, reg y8:V, reg p11:p(V +), reg wt1:*, reg wt2:V, reg p12:p(V +), reg r38:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r39:V, reg r40:V, reg as_matrix2:cls, reg y9:*, reg y10:V, reg p13:p(V +), reg r42:V, reg dim:cls, reg r43:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg good:*, reg good1:V, reg r46:V, reg any:cls, reg r47:V, reg c13:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg good2:*, reg good3:V, reg r50:V, reg sum:cls, reg r51:V, reg p14:p(V +), reg r53:V, reg p15:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r55:V, reg r56:V, reg good4:*, reg good5:V, reg r57:V, reg sum1:cls, reg r58:V, reg p16:p(V +), reg r60:V, reg p17:p(V +), reg r62:V, reg as_matrix3:cls, reg x13:*, reg x14:V, reg p18:p(V +), reg r64:V, reg c14:L, reg r66:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg good6:*, reg good7:V, reg __:cls, reg r67:V, reg as_matrix4:cls, reg y11:*, reg y12:V, reg p19:p(V +), reg r69:V, reg c15:L, reg r71:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg good8:*, reg good9:V, reg __1:cls, reg r72:V, reg wt3:*, reg wt4:V, reg c16:L, reg wt6:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg good10:*, reg good11:V, reg __2:cls, reg r73:V, reg NROW:cls, reg x15:*, reg x16:V, reg p20:p(V +), reg r75:V, reg NCOL:cls, reg x17:*, reg x18:V, reg p21:p(V +), reg r77:V, reg NROW1:cls, reg y13:*, reg y14:V, reg p22:p(V +), reg r79:V, reg NCOL1:cls, reg y15:*, reg y16:V, reg p23:p(V +), reg r81:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r82:V, reg r83:V, reg wt7:*, reg wt8:V, reg length:cls, reg r84:V, reg nry:*, reg nry1:V, reg nrx:*, reg nrx1:V, reg r85:V, reg c17:L, reg stop:cls, reg sprintf1:cls, reg paste2:cls, reg ngettext1:cls, reg nrx2:*, reg nrx3:V, reg p24:p(V +), reg r87:V, reg p25:p(V +), reg ngettext2:cls, reg nry2:*, reg nry3:V, reg p26:p(V +), reg r90:V, reg p27:p(V +), reg r92:V, reg p28:p(V +), reg nrx4:*, reg nrx5:V, reg p29:p(V +), reg nry4:*, reg nry5:V, reg p30:p(V +), reg r96:V, reg p31:p(V +), reg r98:V, reg nry6:*, reg nry7:V, reg ncx:*, reg ncx1:V, reg r100:V, reg c18:L, reg stop1:cls, reg sprintf2:cls, reg paste3:cls, reg ngettext3:cls, reg nry8:*, reg nry9:V, reg p32:p(V +), reg r102:V, reg p33:p(V +), reg ngettext4:cls, reg ncx2:*, reg ncx3:V, reg p34:p(V +), reg r105:V, reg p35:p(V +), reg r107:V, reg p36:p(V +), reg nry10:*, reg nry11:V, reg p37:p(V +), reg ncx4:*, reg ncx5:V, reg p38:p(V +), reg r111:V, reg p39:p(V +), reg r113:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r115:V, reg r116:V, reg wt9:*, reg wt10:V, reg c19:V, reg r117:V, reg c20:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r118:V, reg r119:V, reg wt11:*, reg wt12:V, reg r120:V, reg any1:cls, reg r121:V, reg c21:L, reg stop2:cls, reg r122:V, reg nwts:*, reg nwts1:V, reg nry12:*, reg nry13:V, reg r124:V, reg c22:L, reg stop3:cls, reg gettextf:cls, reg nwts2:*, reg nwts3:V, reg p40:p(V +), reg nry14:*, reg nry15:V, reg p41:p(V +), reg r127:V, reg p42:p(V +), reg r129:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r131:V, reg r132:V, reg wt13:*, reg wt14:V, reg r133:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r134:V, reg r135:V, reg wt15:*, reg wt16:V, reg r136:V, reg any2:cls, reg r137:V, reg c23:L, reg as_matrix5:cls, reg x19:*, reg x20:V, reg p43:p(V +), reg r139:V, reg c24:L, reg r141:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg wt17:*, reg wt18:V, reg r142:V, reg __3:cls, reg r143:V, reg as_matrix6:cls, reg y17:*, reg y18:V, reg p44:p(V +), reg r145:V, reg c25:L, reg r147:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg wt19:*, reg wt20:V, reg r148:V, reg __4:cls, reg r149:V, reg x21:*, reg x22:V, reg wtmult:*, reg wtmult1:V, reg r150:V, reg y19:*, reg y20:V, reg wtmult2:*, reg wtmult3:V, reg r151:V, reg ifelse:cls, reg wt21:*, reg wt22:V, reg r152:V, reg p45:p(V +), reg wtmult4:*, reg wtmult5:V, reg p46:p(V +), reg r155:V, reg r156:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r158:V, reg r159:V, reg C_Cdqrls:*, reg C_Cdqrls1:V, reg x23:*, reg x24:V, reg y21:*, reg y22:V, reg tolerance1:*, reg tolerance2:V, reg vargs:dots, reg r160:V, reg array:cls, reg dimy:*, reg dimy1:V, reg p47:p(V +), reg r162:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r163:V, reg r164:V, reg nry16:*, reg nry17:V, reg ncy:*, reg ncy1:V, reg c26:cls, reg r165:V, reg l:*, reg c27:L, reg r168:V, reg l3:*, reg r169:V, reg l4:*, reg dr10:V, reg dc5:L, reg dx12:V, reg r172:V, reg l6:*, reg r173:V, reg dx13:V, reg r174:V, reg dim__:cls, reg r175:V, reg c28:L, reg r177:V, reg l8:*, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r180:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r181:V, reg r182:V, reg wt23:*, reg wt24:V, reg c29:V, reg r183:V, reg c30:L, reg sym15:cls, reg base15:cls, reg guard15:L, reg r184:V, reg r185:V, reg wt25:*, reg wt26:V, reg r186:V, reg any3:cls, reg r187:V, reg c31:L, reg ncx6:*, reg ncx7:V, reg r188:V, reg c32:L, reg xzero:*, reg xzero1:V, reg z:*, reg z1:V, reg c33:L, reg xzero3:V, reg z3:V, reg dr14:V, reg dc7:L, reg dx16:V, reg xzero5:V, reg dx17:V, reg r189:V, reg r190:V, reg xzero6:*, reg xzero7:V, reg z4:*, reg z5:V, reg c34:L, reg z7:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg r192:V, reg ___:cls, reg r193:V, reg yzero:*, reg yzero1:V, reg fitted_zeros:*, reg fitted_zeros1:V, reg r194:V, reg l9:*, reg c35:L, reg r197:V, reg l12:*, reg r198:V, reg l13:*, reg dr18:V, reg dc9:L, reg dx20:V, reg r201:V, reg l15:*, reg r202:V, reg dx21:V, reg r203:V, reg c36:L, reg r205:V, reg l17:*, reg dx23:V, reg dr20:V, reg dc10:L, reg dx24:V, reg r207:V, reg l19:*, reg dx25:V, reg wt27:*, reg wt28:V, reg r208:V, reg ___1:cls, reg r209:V, reg c37:L, reg r211:V, reg l21:*, reg dr22:V, reg dc11:L, reg dx26:V, reg r213:V, reg dx27:V, reg r214:V, reg z8:*, reg z9:V, reg c38:L, reg z11:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r216:V, reg invmult:*, reg invmult1:V, reg r217:V, reg l22:*, reg c39:L, reg r219:V, reg l24:*, reg dr26:V, reg dc13:L, reg dx30:V, reg r221:V, reg dx31:V, reg r222:V, reg z12:*, reg z13:V, reg c40:L, reg z15:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r224:V, reg l25:*, reg c41:L, reg dx35:V, reg l27:*, reg dr30:V, reg dc15:L, reg dx37:V, reg dx39:V, reg good12:*, reg good13:V, reg ___2:cls, reg r225:V, reg dimy2:*, reg dimy3:V, reg c42:L, reg dimy5:V, reg dr32:V, reg dc16:L, reg dx40:V, reg dx41:V, reg __5:cls, reg r226:V, reg r227:V, reg c43:L, reg c45:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r228:V, reg c48:L, reg r229:V, reg yname3:*, reg yname4:V, reg c49:V, reg c50:L, reg c51:V, reg c53:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r230:V, reg r231:V, reg resids:*, reg resids1:V, reg drop:cls, reg r232:V, reg xnames4:*, reg xnames5:V, reg l28:*, reg c54:L, reg xnames8:V, reg l31:*, reg xnames9:V, reg l32:*, reg dr34:V, reg dc17:L, reg dx42:V, reg xnames12:V, reg l34:*, reg xnames13:V, reg dx43:V, reg r233:V, reg names__:cls, reg r234:V, reg c55:L, reg xnames15:V, reg l36:*, reg dr36:V, reg dc18:L, reg dx44:V, reg xnames17:V, reg dx45:V, reg r235:V, reg yname5:*, reg yname6:V, reg l37:*, reg colnames__:cls, reg r236:V, reg yname7:*, reg yname8:V, reg l38:*, reg c56:L, reg yname11:V, reg l41:*, reg yname12:V, reg l42:*, reg dr38:V, reg dc19:L, reg dx46:V, reg yname15:V, reg l44:*, reg yname16:V, reg dx47:V, reg r237:V, reg colnames__1:cls, reg r238:V, reg c57:L, reg yname18:V, reg l46:*, reg dr40:V, reg dc20:L, reg dx48:V, reg dx49:V, reg r239:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r240:V, reg r241:V, reg ncx8:*, reg ncx9:V, reg ncy2:*, reg ncy3:V, reg c58:cls, reg r242:V, reg l47:*, reg c59:L, reg r245:V, reg l50:*, reg r246:V, reg l51:*, reg dr42:V, reg dc21:L, reg dx50:V, reg r249:V, reg l53:*, reg r250:V, reg dx51:V, reg r251:V, reg dim__1:cls, reg r252:V, reg c60:L, reg r254:V, reg l55:*, reg dr44:V, reg dc22:L, reg dx52:V, reg dx53:V, reg r257:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r258:V, reg r259:V, reg xnames19:*, reg xnames20:V, reg yname21:*, reg yname22:V, reg list:cls, reg r260:V, reg l56:*, reg c61:L, reg r263:V, reg l59:*, reg r264:V, reg l60:*, reg dr46:V, reg dc23:L, reg dx54:V, reg r267:V, reg l62:*, reg r268:V, reg dx55:V, reg r269:V, reg dimnames__:cls, reg r270:V, reg c62:L, reg r272:V, reg l64:*, reg dr48:V, reg dc24:L, reg dx56:V, reg r274:V, reg dx57:V, reg r275:V, reg as_matrix7:cls, reg z16:*, reg z17:V, reg c63:L, reg z19:V, reg dr50:V, reg dc25:L, reg dx58:V, reg dx59:V, reg r276:V, reg p48:p(V +), reg r278:V, reg l65:*, reg c64:L, reg r280:V, reg l67:*, reg dr52:V, reg dc26:L, reg dx60:V, reg dx61:V, reg r283:V, reg xnames21:*, reg xnames22:V, reg l68:*, reg c65:L, reg xnames25:V, reg l71:*, reg xnames26:V, reg l72:*, reg dr54:V, reg dc27:L, reg dx62:V, reg xnames29:V, reg l74:*, reg xnames30:V, reg dx63:V, reg r284:V, reg colnames__2:cls, reg r285:V, reg c66:L, reg xnames32:V, reg l76:*, reg dr56:V, reg dc28:L, reg dx64:V, reg dx65:V, reg r286:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r287:V, reg r288:V, reg z20:*, reg z21:V, reg c67:L, reg z23:V, reg dr58:V, reg dc29:L, reg dx66:V, reg dx67:V, reg r289:V, reg resids2:*, reg resids3:V, reg list1:cls, reg r290:V, reg z24:*, reg z25:V, reg c68:L, reg z27:V, reg dr60:V, reg dc30:L, reg dx68:V, reg dx69:V, reg r291:V, reg ncx10:*, reg ncx11:V, reg r292:V, reg c69:L, reg xnames35:*, reg xnames36:V, reg c70:L, reg xnames38:V, reg dr62:V, reg dc31:L, reg dx70:V, reg dx71:V, reg z28:*, reg z29:V, reg c71:L, reg xnames40:V, reg z31:V, reg dr64:V, reg dc32:L, reg dx72:V, reg xnames42:V, reg dx73:V, reg r293:V, reg __6:cls, reg r294:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r295:V, reg r296:V, reg xnames43:*, reg xnames44:V, reg list2:cls, reg r297:V, reg l77:*, reg c72:L, reg r300:V, reg l80:*, reg r301:V, reg l81:*, reg dr66:V, reg dc33:L, reg dx74:V, reg r304:V, reg l83:*, reg r305:V, reg dx75:V, reg r306:V, reg dimnames__1:cls, reg r307:V, reg c73:L, reg r309:V, reg l85:*, reg dr68:V, reg dc34:L, reg dx76:V, reg dx77:V, reg r312:V, reg warning1:cls, reg r313:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r315:V, reg r316:V, reg wt29:*, reg wt30:V, reg c74:V, reg r317:V, reg c75:L, reg sym23:cls, reg base23:cls, reg guard23:L, reg r318:V, reg r319:V, reg dimy6:*, reg dimy7:V, reg c76:L, reg dimy9:V, reg dr70:V, reg dc35:L, reg dx78:V, reg dx79:V, reg __7:cls, reg r320:V, reg rep_int:cls, reg r321:V, reg wt31:*, reg wt32:V, reg l86:*, reg c77:L, reg wt34:V, reg l88:*, reg dr72:V, reg dc36:L, reg dx80:V, reg dx81:V, reg good14:*, reg good15:V, reg ___3:cls, reg r322:V, reg sym24:cls, reg base24:cls, reg guard24:L, reg r323:V, reg r324:V, reg output:*, reg output1:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r325:V, reg r326:V, reg weights:*, reg weights1:V, reg list3:cls, reg r327:V, reg c78:cls, reg r328:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r330:V, reg r331:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r332:V, reg r333:V, reg z32:*, reg z33:V, reg c79:L, reg z35:V, reg dr74:V, reg dc37:L, reg dx82:V, reg dx83:V, reg r334:V, reg drop1:cls, reg r335:V, reg z36:*, reg z37:V, reg c80:L, reg z39:V, reg dr76:V, reg dc38:L, reg dx84:V, reg dx85:V, reg r336:V, reg z40:*, reg z41:V, reg c81:L, reg z43:V, reg dr78:V, reg dc39:L, reg dx86:V, reg dx87:V, reg r337:V, reg z44:*, reg z45:V, reg c82:L, reg z47:V, reg dr80:V, reg dc40:L, reg dx88:V, reg dx89:V, reg r338:V, reg z48:*, reg z49:V, reg c83:L, reg z51:V, reg dr82:V, reg dc41:L, reg dx90:V, reg dx91:V, reg r339:V, reg z52:*, reg z53:V, reg c84:L, reg z55:V, reg dr84:V, reg dc42:L, reg dx92:V, reg dx93:V, reg r340:V, reg list4:cls, reg r341:V, reg l89:*, reg oldClass__:cls, reg r342:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r343:V, reg r344:V, reg output2:*, reg output3:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r345:V, reg r346:V, reg intercept3:*, reg intercept4:V, reg rqr:*, reg rqr1:V, reg list5:cls, reg r347:V, reg c85:cls, reg r348:V, reg output4:*, reg output5:V |
    mkenv;
    st x = x;
    st y = y;
    wt_isMissing = missing.0(wt);
    if wt_isMissing then L0(NULL) else L0(wt);
  L0(wt_orDefault):
    st wt = wt_orDefault;
    intercept_isMissing = missing.0(intercept);
    if intercept_isMissing then L1(TRUE) else L1(intercept);
  L1(intercept_orDefault):
    st intercept = intercept_orDefault;
    tolerance_isMissing = missing.0(tolerance);
    if tolerance_isMissing then L2(1.0E-7) else L2(tolerance);
  L2(tolerance_orDefault):
    st tolerance = tolerance_orDefault;
    yname_isMissing = missing.0(yname);
    if yname_isMissing then L3(NULL) else L3(yname);
  L3(yname_orDefault):
    st yname = yname_orDefault;
    as_matrix = ldf `as.matrix`;
    check L79() else D0();
  D0():
    deopt 1 [];
  L79():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn as_matrix(p);
    check L80() else D1();
  D1():
    deopt 3 [r1];
  L80():
    st x = r1;
    as_matrix1 = ldf `as.matrix`;
    check L81() else D2();
  D2():
    deopt 6 [];
  L81():
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r3 = dyn as_matrix1(p1);
    check L82() else D3();
  D3():
    deopt 8 [r3];
  L82():
    st y = r3;
    colnames = ldf colnames;
    check L83() else D4();
  D4():
    deopt 11 [];
  L83():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r5 = dyn colnames(p2);
    check L84() else D5();
  D5():
    deopt 13 [r5];
  L84():
    st xnames = r5;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L85() else L86();
  L4(r7):
    c1 = `as.logical`(r7);
    if c1 then L88() else L5();
  L85():
    xnames = ld xnames;
    check L87() else D6();
  L86():
    r6 = dyn base(<sym xnames>);
    goto L4(r6);
  D6():
    deopt 16 [xnames];
  L5():
    goto L8();
  L8():
    intercept1 = ld intercept;
    check L96() else D11();
  L87():
    xnames1 = force? xnames;
    checkMissing(xnames1);
    c = `==`(xnames1, NULL);
    goto L4(c);
  L88():
    ncol = ldf ncol;
    check L89() else D7();
  D7():
    deopt 20 [];
  D11():
    deopt 36 [intercept1];
  L89():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r9 = dyn ncol(p3);
    check L90() else D8();
  L96():
    intercept2 = force? intercept1;
    checkMissing(intercept2);
    c3 = `as.logical`(intercept2);
    if c3 then L97() else L9();
  D8():
    deopt 22 [r9];
  L9():
    goto L11();
  L11():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L105() else L106();
  L90():
    r10 = `==`(r9, 1);
    c2 = `as.logical`(r10);
    if c2 then L91() else L6();
  L97():
    cbind = ldf cbind;
    check L98() else D12();
  D12():
    deopt 39 [];
  L6():
    paste0 = ldf paste0;
    check L93() else D9();
  L7(r11):
    goto L8();
  L12(r25):
    c6 = `as.logical`(r25);
    if c6 then L108() else L13(c6);
  L91():
    st xnames = "X";
    goto L7("X");
  L98():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r19 = dyn cbind(1.0, p6);
    check L99() else D13();
  L105():
    yname1 = ld yname;
    check L107() else D16();
  L106():
    r24 = dyn base2(<sym yname>);
    goto L12(r24);
  D9():
    deopt 29 [];
  D13():
    deopt 42 [r19];
  D16():
    deopt 55 [yname1];
  L13(c8):
    c12 = `as.logical`(c8);
    if c12 then L112() else L14();
  L93():
    p5 = prom<V +>{
      ncol1 = ldf ncol;
      p4 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r13 = dyn ncol1(p4);
      r14 = `:`(1, r13);
      return r14;
    };
    r16 = dyn paste0("X", p5);
    check L94() else D10();
  L99():
    st x = r19;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L100() else L101();
  L107():
    yname2 = force? yname1;
    checkMissing(yname2);
    c5 = `==`(yname2, NULL);
    goto L12(c5);
  L108():
    ncol2 = ldf ncol;
    check L109() else D17();
  D10():
    deopt 32 [r16];
  D17():
    deopt 59 [c6];
  L10(r21):
    st xnames = r21;
    goto L11();
  L14():
    goto L15();
  L15():
    complete_cases = ldf `complete.cases`;
    check L116() else D21();
  L94():
    st xnames = r16;
    goto L7(r16);
  L100():
    xnames2 = ld xnames;
    check L102() else D14();
  L101():
    r20 = dyn base1("Intercept", <sym xnames>);
    goto L10(r20);
  L109():
    p7 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r27 = dyn ncol2(p7);
    check L110() else D18();
  L112():
    paste1 = ldf paste0;
    check L113() else D19();
  D14():
    deopt 47 [xnames2];
  D18():
    deopt 61 [c6, r27];
  D19():
    deopt 66 [];
  D21():
    deopt 74 [];
  L102():
    xnames3 = force? xnames2;
    checkMissing(xnames3);
    c4 = ldf c in base;
    r22 = dyn c4("Intercept", xnames3);
    check L103() else D15();
  L110():
    r28 = `>`(r27, 1.0);
    c9 = `as.logical`(r28);
    c10 = `&&`(c6, c9);
    goto L13(c10);
  L113():
    p9 = prom<V +>{
      ncol3 = ldf ncol;
      p8 = prom<V +>{
        y5 = ld y;
        y6 = force? y5;
        checkMissing(y6);
        return y6;
      };
      r30 = dyn ncol3(p8);
      r31 = `:`(1, r30);
      return r31;
    };
    r33 = dyn paste1("Y", p9);
    check L114() else D20();
  L116():
    p10 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p11 = prom<V +>{
      y7 = ld y;
      y8 = force? y7;
      checkMissing(y8);
      return y8;
    };
    p12 = prom<V +>{
      wt1 = ld wt;
      wt2 = force? wt1;
      checkMissing(wt2);
      return wt2;
    };
    r38 = dyn complete_cases(p10, p11, p12);
    check L117() else D22();
  D15():
    deopt 50 [r22];
  D20():
    deopt 69 [r33];
  D22():
    deopt 78 [r38];
  L103():
    goto L10(r22);
  L114():
    st yname = r33;
    goto L15();
  L117():
    st good = r38;
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L118() else L119();
  L16(r40):
    st dimy = r40;
    sym4 = ldf any;
    base4 = ldf any in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L123() else L124();
  L118():
    as_matrix2 = ldf `as.matrix`;
    check L120() else D23();
  L119():
    r39 = dyn base3(<lang as.matrix(y)>);
    goto L16(r39);
  D23():
    deopt 83 [];
  L17(r45):
    c13 = `as.logical`(r45);
    if c13 then L127() else L18();
  L120():
    p13 = prom<V +>{
      y9 = ld y;
      y10 = force? y9;
      checkMissing(y10);
      return y10;
    };
    r42 = dyn as_matrix2(p13);
    check L121() else D24();
  L123():
    good = ld good;
    check L125() else D26();
  L124():
    r44 = dyn base4(<lang `!`(good)>);
    goto L17(r44);
  D24():
    deopt 85 [r42];
  D26():
    deopt 91 [good];
  L18():
    goto L22();
  L22():
    NROW = ldf NROW;
    check L148() else D38();
  L121():
    dim = ldf dim in base;
    r43 = dyn dim(r42);
    check L122() else D25();
  L125():
    good1 = force? good;
    checkMissing(good1);
    r46 = `!`(good1);
    any = ldf any in base;
    r47 = dyn any(r46);
    check L126() else D27();
  L127():
    warning = ldf warning;
    check L128() else D28();
  D25():
    deopt 87 [r43];
  D27():
    deopt 95 [r47];
  D28():
    deopt 97 [];
  D38():
    deopt 135 [];
  L122():
    goto L16(r43);
  L126():
    goto L17(r47);
  L128():
    p17 = prom<V +>{
      sprintf = ldf sprintf;
      p15 = prom<V +>{
        ngettext = ldf ngettext;
        p14 = prom<V +>{
          sym5 = ldf sum;
          base5 = ldf sum in base;
          guard5 = `==`.4(sym5, base5);
          if guard5 then L1() else L2();
        L0(r49):
          return r49;
        L1():
          good2 = ld good;
          good3 = force? good2;
          checkMissing(good3);
          r50 = `!`(good3);
          sum = ldf sum in base;
          r51 = dyn sum(r50);
          goto L0(r51);
        L2():
          r48 = dyn base5(<lang `!`(good)>);
          goto L0(r48);
        };
        r53 = dyn ngettext(p14, "%d missing value deleted", "%d missing values deleted");
        return r53;
      };
      p16 = prom<V +>{
        sym6 = ldf sum;
        base6 = ldf sum in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L1() else L2();
      L0(r56):
        return r56;
      L1():
        good4 = ld good;
        good5 = force? good4;
        checkMissing(good5);
        r57 = `!`(good5);
        sum1 = ldf sum in base;
        r58 = dyn sum1(r57);
        goto L0(r58);
      L2():
        r55 = dyn base6(<lang `!`(good)>);
        goto L0(r55);
      };
      r60 = dyn sprintf(p15, p16);
      return r60;
    };
    r62 = dyn warning[, domain](p17, NA_LGL);
    check L129() else D29();
  L148():
    p20 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      return x16;
    };
    r75 = dyn NROW(p20);
    check L149() else D39();
  D29():
    deopt 101 [r62];
  D39():
    deopt 137 [r75];
  L129():
    as_matrix3 = ldf `as.matrix`;
    check L130() else D30();
  L149():
    st nrx = r75;
    NCOL = ldf NCOL;
    check L150() else D40();
  D30():
    deopt 103 [];
  D40():
    deopt 140 [];
  L130():
    p18 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r64 = dyn as_matrix3(p18);
    check L131() else D31();
  L150():
    p21 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      return x18;
    };
    r77 = dyn NCOL(p21);
    check L151() else D41();
  D31():
    deopt 105 [r64];
  D41():
    deopt 142 [r77];
  L131():
    c14 = `is.object`(r64);
    if c14 then L132() else L133(r64);
  L151():
    st ncx = r77;
    NROW1 = ldf NROW;
    check L152() else D42();
  D42():
    deopt 145 [];
  L19(dx1):
    st x = dx1;
    as_matrix4 = ldf `as.matrix`;
    check L136() else D33();
  L132():
    dr = tryDispatchBuiltin.1("[", r64);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L134() else L133(dr);
  L133(r66):
    good6 = ld good;
    check L135() else D32();
  L152():
    p22 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      return y14;
    };
    r79 = dyn NROW1(p22);
    check L153() else D43();
  D32():
    deopt 106 [r66, good6];
  D33():
    deopt 115 [];
  D43():
    deopt 147 [r79];
  L134():
    dx = getTryDispatchBuiltinValue(dr);
    goto L19(dx);
  L135():
    good7 = force? good6;
    __ = ldf `[` in base;
    r67 = dyn __(r64, good7, <missing>, FALSE);
    goto L19(r67);
  L136():
    p19 = prom<V +>{
      y11 = ld y;
      y12 = force? y11;
      checkMissing(y12);
      return y12;
    };
    r69 = dyn as_matrix4(p19);
    check L137() else D34();
  L153():
    st nry = r79;
    NCOL1 = ldf NCOL;
    check L154() else D44();
  D34():
    deopt 117 [r69];
  D44():
    deopt 150 [];
  L137():
    c15 = `is.object`(r69);
    if c15 then L138() else L139(r69);
  L154():
    p23 = prom<V +>{
      y15 = ld y;
      y16 = force? y15;
      checkMissing(y16);
      return y16;
    };
    r81 = dyn NCOL1(p23);
    check L155() else D45();
  D45():
    deopt 152 [r81];
  L20(dx3):
    st y = dx3;
    wt3 = ld wt;
    check L142() else D36();
  L138():
    dr2 = tryDispatchBuiltin.1("[", r69);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L140() else L139(dr2);
  L139(r71):
    good8 = ld good;
    check L141() else D35();
  L155():
    st ncy = r81;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L156() else L157();
  D35():
    deopt 118 [r71, good8];
  D36():
    deopt 126 [wt3];
  L23(r83):
    st nwts = r83;
    nry = ld nry;
    check L160() else D48();
  L140():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L20(dx2);
  L141():
    good9 = force? good8;
    __1 = ldf `[` in base;
    r72 = dyn __1(r69, good9, <missing>, FALSE);
    goto L20(r72);
  L142():
    wt4 = force? wt3;
    checkMissing(wt4);
    c16 = `is.object`(wt4);
    if c16 then L143() else L144(wt4);
  L156():
    wt7 = ld wt;
    check L158() else D46();
  L157():
    r82 = dyn base7(<sym wt>);
    goto L23(r82);
  D46():
    deopt 156 [wt7];
  D48():
    deopt 161 [nry];
  L21(dx5):
    st wt = dx5;
    goto L22();
  L143():
    dr4 = tryDispatchBuiltin.1("[", wt4);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L145() else L144(dr4);
  L144(wt6):
    good10 = ld good;
    check L146() else D37();
  L158():
    wt8 = force? wt7;
    checkMissing(wt8);
    length = ldf length in base;
    r84 = dyn length(wt8);
    check L159() else D47();
  L160():
    nry1 = force? nry;
    checkMissing(nry1);
    nrx = ld nrx;
    check L161() else D49();
  D37():
    deopt 128 [wt6, good10];
  D47():
    deopt 159 [r84];
  D49():
    deopt 162 [nry1, nrx];
  L145():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L21(dx4);
  L146():
    good11 = force? good10;
    __2 = ldf `[` in base;
    r73 = dyn __2(wt6, good11);
    goto L21(r73);
  L159():
    goto L23(r84);
  L161():
    nrx1 = force? nrx;
    checkMissing(nrx1);
    r85 = `!=`(nry1, nrx1);
    c17 = `as.logical`(r85);
    if c17 then L162() else L24();
  L24():
    goto L25();
  L25():
    nry6 = ld nry;
    check L166() else D52();
  L162():
    stop = ldf stop;
    check L163() else D50();
  D50():
    deopt 166 [];
  D52():
    deopt 173 [nry6];
  L163():
    p31 = prom<V +>{
      sprintf1 = ldf sprintf;
      p28 = prom<V +>{
        paste2 = ldf paste0;
        p25 = prom<V +>{
          ngettext1 = ldf ngettext;
          p24 = prom<V +>{
            nrx2 = ld nrx;
            nrx3 = force? nrx2;
            checkMissing(nrx3);
            return nrx3;
          };
          r87 = dyn ngettext1(p24, "'X' matrix has %d case (row)", "'X' matrix has %d cases (rows)");
          return r87;
        };
        p27 = prom<V +>{
          ngettext2 = ldf ngettext;
          p26 = prom<V +>{
            nry2 = ld nry;
            nry3 = force? nry2;
            checkMissing(nry3);
            return nry3;
          };
          r90 = dyn ngettext2(p26, "'Y' has %d case (row)", "'Y' has %d cases (rows)");
          return r90;
        };
        r92 = dyn paste2(p25, ", ", p27);
        return r92;
      };
      p29 = prom<V +>{
        nrx4 = ld nrx;
        nrx5 = force? nrx4;
        checkMissing(nrx5);
        return nrx5;
      };
      p30 = prom<V +>{
        nry4 = ld nry;
        nry5 = force? nry4;
        checkMissing(nry5);
        return nry5;
      };
      r96 = dyn sprintf1(p28, p29, p30);
      return r96;
    };
    r98 = dyn stop[, domain](p31, NA_LGL);
    check L164() else D51();
  L166():
    nry7 = force? nry6;
    checkMissing(nry7);
    ncx = ld ncx;
    check L167() else D53();
  D51():
    deopt 170 [r98];
  D53():
    deopt 174 [nry7, ncx];
  L164():
    goto L25();
  L167():
    ncx1 = force? ncx;
    checkMissing(ncx1);
    r100 = `<`(nry7, ncx1);
    c18 = `as.logical`(r100);
    if c18 then L168() else L26();
  L26():
    goto L27();
  L27():
    sym8 = ldf `is.null`;
    base8 = ldf `is.null` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L172() else L173();
  L168():
    stop1 = ldf stop;
    check L169() else D54();
  D54():
    deopt 178 [];
  L28(r116):
    r117 = `!`(r116);
    c20 = `as.logical`(r117);
    if c20 then L175() else L29();
  L169():
    p39 = prom<V +>{
      sprintf2 = ldf sprintf;
      p36 = prom<V +>{
        paste3 = ldf paste0;
        p33 = prom<V +>{
          ngettext3 = ldf ngettext;
          p32 = prom<V +>{
            nry8 = ld nry;
            nry9 = force? nry8;
            checkMissing(nry9);
            return nry9;
          };
          r102 = dyn ngettext3(p32, "only %d case", "only %d cases");
          return r102;
        };
        p35 = prom<V +>{
          ngettext4 = ldf ngettext;
          p34 = prom<V +>{
            ncx2 = ld ncx;
            ncx3 = force? ncx2;
            checkMissing(ncx3);
            return ncx3;
          };
          r105 = dyn ngettext4(p34, "but %d variable", "but %d variables");
          return r105;
        };
        r107 = dyn paste3(p33, ", ", p35);
        return r107;
      };
      p37 = prom<V +>{
        nry10 = ld nry;
        nry11 = force? nry10;
        checkMissing(nry11);
        return nry11;
      };
      p38 = prom<V +>{
        ncx4 = ld ncx;
        ncx5 = force? ncx4;
        checkMissing(ncx5);
        return ncx5;
      };
      r111 = dyn sprintf2(p36, p37, p38);
      return r111;
    };
    r113 = dyn stop1[, domain](p39, NA_LGL);
    check L170() else D55();
  L172():
    wt9 = ld wt;
    check L174() else D56();
  L173():
    r115 = dyn base8(<sym wt>);
    goto L28(r115);
  D55():
    deopt 182 [r113];
  D56():
    deopt 186 [wt9];
  L29():
    goto L41();
  L41():
    sym12 = ldf `.Call`;
    base12 = ldf `.Call` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L218() else L219();
  L170():
    goto L27();
  L174():
    wt10 = force? wt9;
    checkMissing(wt10);
    c19 = `==`(wt10, NULL);
    goto L28(c19);
  L175():
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L176() else L177();
  L30(r119):
    c21 = `as.logical`(r119);
    if c21 then L180() else L31();
  L42(r159):
    st z = r159;
    array = ldf array;
    check L224() else D84();
  L176():
    wt11 = ld wt;
    check L178() else D57();
  L177():
    r118 = dyn base9(<lang `<`(wt, 0.0)>);
    goto L30(r118);
  L218():
    C_Cdqrls = ld C_Cdqrls;
    check L220() else D80();
  L219():
    r158 = dyn base12(<sym C_Cdqrls>, <sym x>, <sym y>, <sym tolerance>, FALSE);
    goto L42(r158);
  D57():
    deopt 192 [wt11];
  D80():
    deopt 277 [C_Cdqrls];
  D84():
    deopt 286 [];
  L31():
    goto L32();
  L32():
    nwts = ld nwts;
    check L184() else D61();
  L178():
    wt12 = force? wt11;
    checkMissing(wt12);
    r120 = `<`(wt12, 0.0);
    any1 = ldf any in base;
    r121 = dyn any1(r120);
    check L179() else D58();
  L180():
    stop2 = ldf stop;
    check L181() else D59();
  L220():
    C_Cdqrls1 = force? C_Cdqrls;
    checkMissing(C_Cdqrls1);
    x23 = ld x;
    check L221() else D81();
  L224():
    p47 = prom<V +>{
      dimy = ld dimy;
      dimy1 = force? dimy;
      checkMissing(dimy1);
      return dimy1;
    };
    r162 = dyn array[, dim](NA_LGL, p47);
    check L225() else D85();
  D58():
    deopt 197 [r121];
  D59():
    deopt 199 [];
  D61():
    deopt 204 [nwts];
  D81():
    deopt 278 [C_Cdqrls1, x23];
  D85():
    deopt 290 [r162];
  L179():
    goto L30(r121);
  L181():
    r122 = dyn stop2("negative weights not allowed");
    check L182() else D60();
  L184():
    nwts1 = force? nwts;
    checkMissing(nwts1);
    nry12 = ld nry;
    check L185() else D62();
  L221():
    x24 = force? x23;
    checkMissing(x24);
    y21 = ld y;
    check L222() else D82();
  L225():
    st resids = r162;
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L226() else L227();
  D60():
    deopt 201 [r122];
  D62():
    deopt 205 [nwts1, nry12];
  D82():
    deopt 279 [C_Cdqrls1, x24, y21];
  L43(r164):
    l = ld z;
    c27 = `is.object`(l);
    if c27 then L232() else L233(r164, l, r164, l);
  L182():
    goto L32();
  L185():
    nry13 = force? nry12;
    checkMissing(nry13);
    r124 = `!=`(nwts1, nry13);
    c22 = `as.logical`(r124);
    if c22 then L186() else L33();
  L222():
    y22 = force? y21;
    checkMissing(y22);
    tolerance1 = ld tolerance;
    check L223() else D83();
  L226():
    nry16 = ld nry;
    check L228() else D86();
  L227():
    r163 = dyn base13(<sym nry>, <sym ncy>);
    goto L43(r163);
  D83():
    deopt 280 [C_Cdqrls1, x24, y22, tolerance1];
  D86():
    deopt 294 [nry16];
  L33():
    goto L34();
  L34():
    sym10 = ldf sqrt;
    base10 = ldf sqrt in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L190() else L191();
  L186():
    stop3 = ldf stop;
    check L187() else D63();
  L223():
    tolerance2 = force? tolerance1;
    checkMissing(tolerance2);
    vargs = dots[x24, y22, tolerance2, FALSE];
    r160 = `.Call`(C_Cdqrls1, vargs, <missing>);
    goto L42(r160);
  L228():
    nry17 = force? nry16;
    checkMissing(nry17);
    ncy = ld ncy;
    check L229() else D87();
  L231(r172, l6, r173, dx13):
    dim__ = ldf `dim<-`;
    check L235() else D89();
  L232():
    dr10 = tryDispatchBuiltin.1("$", l);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L234() else L233(r164, l, r164, dr10);
  L233(r168, l3, r169, l4):
    r174 = `$`(l4, <sym residuals>);
    goto L231(r168, l3, r169, r174);
  D63():
    deopt 209 [];
  D87():
    deopt 296 [ncy];
  D89():
    deopt 304 [r172, l6, dx13, r173];
  L35(r132):
    st wtmult = r132;
    sym11 = ldf any;
    base11 = ldf any in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L193() else L194();
  L187():
    p42 = prom<V +>{
      gettextf = ldf gettextf;
      p40 = prom<V +>{
        nwts2 = ld nwts;
        nwts3 = force? nwts2;
        checkMissing(nwts3);
        return nwts3;
      };
      p41 = prom<V +>{
        nry14 = ld nry;
        nry15 = force? nry14;
        checkMissing(nry15);
        return nry15;
      };
      r127 = dyn gettextf("number of weights = %d should equal %d (number of responses)", p40, p41);
      return r127;
    };
    r129 = dyn stop3[, domain](p42, NA_LGL);
    check L188() else D64();
  L190():
    wt13 = ld wt;
    check L192() else D65();
  L191():
    r131 = dyn base10(<sym wt>);
    goto L35(r131);
  L229():
    ncy1 = force? ncy;
    checkMissing(ncy1);
    c26 = ldf c in base;
    r165 = dyn c26(nry17, ncy1);
    check L230() else D88();
  L234():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L231(r164, l, r164, dx12);
  L235():
    r175 = dyn dim__(dx13, NULL, r173);
    check L236() else D90();
  D64():
    deopt 213 [r129];
  D65():
    deopt 217 [wt13];
  D88():
    deopt 299 [r165];
  D90():
    deopt 306 [r172, l6, r175];
  L36(r135):
    c23 = `as.logical`(r135);
    if c23 then L197() else L37();
  L188():
    goto L34();
  L192():
    wt14 = force? wt13;
    checkMissing(wt14);
    r133 = sqrt(wt14);
    goto L35(r133);
  L193():
    wt15 = ld wt;
    check L195() else D66();
  L194():
    r134 = dyn base11(<lang `==`(wt, 0.0)>);
    goto L36(r134);
  L230():
    goto L43(r165);
  L236():
    c28 = `is.object`(l6);
    if c28 then L238() else L239(r172, l6);
  D66():
    deopt 223 [wt15];
  L37():
    goto L40();
  L40():
    x21 = ld x;
    check L211() else D74();
  L195():
    wt16 = force? wt15;
    checkMissing(wt16);
    r136 = `==`(wt16, 0.0);
    any2 = ldf any in base;
    r137 = dyn any2(r136);
    check L196() else D67();
  L197():
    as_matrix5 = ldf `as.matrix`;
    check L198() else D68();
  L237(dx15):
    st z = dx15;
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L241() else L242();
  L238():
    dr12 = tryDispatchBuiltin.0("$<-", l6, r175);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L240() else L239(r172, dr12);
  L239(r177, l8):
    r180 = `$<-`(l8, <sym residuals>, r175);
    goto L237(r180);
  D67():
    deopt 228 [r137];
  D68():
    deopt 230 [];
  D74():
    deopt 255 [x21];
  L44(r182):
    r183 = `!`(r182);
    c30 = `as.logical`(r183);
    if c30 then L244() else L45();
  L196():
    goto L36(r137);
  L198():
    p43 = prom<V +>{
      x19 = ld x;
      x20 = force? x19;
      checkMissing(x20);
      return x20;
    };
    r139 = dyn as_matrix5(p43);
    check L199() else D69();
  L211():
    x22 = force? x21;
    checkMissing(x22);
    wtmult = ld wtmult;
    check L212() else D75();
  L240():
    dx14 = getTryDispatchBuiltinValue(dr12);
    goto L237(dx14);
  L241():
    wt23 = ld wt;
    check L243() else D91();
  L242():
    r181 = dyn base14(<sym wt>);
    goto L44(r181);
  D69():
    deopt 232 [r139];
  D75():
    deopt 256 [x22, wtmult];
  D91():
    deopt 310 [wt23];
  L45():
    goto L52();
  L52():
    z12 = ld z;
    check L292() else D105();
  L199():
    c24 = `is.object`(r139);
    if c24 then L200() else L201(r139);
  L212():
    wtmult1 = force? wtmult;
    checkMissing(wtmult1);
    r150 = `*`(x22, wtmult1);
    st x = r150;
    y19 = ld y;
    check L213() else D76();
  L243():
    wt24 = force? wt23;
    checkMissing(wt24);
    c29 = `==`(wt24, NULL);
    goto L44(c29);
  L244():
    sym15 = ldf any;
    base15 = ldf any in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L245() else L246();
  D76():
    deopt 260 [y19];
  D105():
    deopt 370 [z12];
  L38(dx8):
    st xzero = dx8;
    as_matrix6 = ldf `as.matrix`;
    check L204() else D71();
  L46(r185):
    c31 = `as.logical`(r185);
    if c31 then L249() else L47();
  L200():
    dr6 = tryDispatchBuiltin.1("[", r139);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L202() else L201(dr6);
  L201(r141):
    wt17 = ld wt;
    check L203() else D70();
  L213():
    y20 = force? y19;
    checkMissing(y20);
    wtmult2 = ld wtmult;
    check L214() else D77();
  L245():
    wt25 = ld wt;
    check L247() else D92();
  L246():
    r184 = dyn base15(<lang `==`(wt, 0.0)>);
    goto L46(r184);
  L292():
    z13 = force? z12;
    checkMissing(z13);
    c40 = `is.object`(z13);
    if c40 then L294() else L295(z13);
  D70():
    deopt 233 [r141, wt17];
  D71():
    deopt 242 [];
  D77():
    deopt 261 [y20, wtmult2];
  D92():
    deopt 316 [wt25];
  L47():
    goto L51();
  L51():
    z8 = ld z;
    check L281() else D103();
  L202():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L38(dx7);
  L203():
    wt18 = force? wt17;
    checkMissing(wt18);
    r142 = `==`(wt18, 0.0);
    __3 = ldf `[` in base;
    r143 = dyn __3(r139, r142, <missing>);
    goto L38(r143);
  L204():
    p44 = prom<V +>{
      y17 = ld y;
      y18 = force? y17;
      checkMissing(y18);
      return y18;
    };
    r145 = dyn as_matrix6(p44);
    check L205() else D72();
  L214():
    wtmult3 = force? wtmult2;
    checkMissing(wtmult3);
    r151 = `*`(y20, wtmult3);
    st y = r151;
    ifelse = ldf ifelse;
    check L215() else D78();
  L247():
    wt26 = force? wt25;
    checkMissing(wt26);
    r186 = `==`(wt26, 0.0);
    any3 = ldf any in base;
    r187 = dyn any3(r186);
    check L248() else D93();
  L249():
    ncx6 = ld ncx;
    check L250() else D94();
  L293(dx33):
    l25 = ld resids;
    c41 = `is.object`(l25);
    if c41 then L297() else L298(dx33, l25);
  L294():
    dr28 = tryDispatchBuiltin.1("$", z13);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L296() else L295(dr28);
  L295(z15):
    r224 = `$`(z15, <sym residuals>);
    goto L293(r224);
  D72():
    deopt 244 [r145];
  D78():
    deopt 267 [1.0];
  D93():
    deopt 321 [r187];
  D94():
    deopt 322 [ncx6];
  D103():
    deopt 360 [z8];
  L53(dx39):
    st resids = dx39;
    dimy2 = ld dimy;
    check L301() else D107();
  L205():
    c25 = `is.object`(r145);
    if c25 then L206() else L207(r145);
  L215():
    p45 = prom<V +>{
      wt21 = ld wt;
      wt22 = force? wt21;
      checkMissing(wt22);
      r152 = `==`(wt22, 0.0);
      return r152;
    };
    p46 = prom<V +>{
      wtmult4 = ld wtmult;
      wtmult5 = force? wtmult4;
      checkMissing(wtmult5);
      return wtmult5;
    };
    r155 = dyn ifelse(p45, 1.0, p46);
    check L216() else D79();
  L248():
    goto L46(r187);
  L250():
    ncx7 = force? ncx6;
    checkMissing(ncx7);
    r188 = `==`(ncx7, 1);
    c32 = `as.logical`(r188);
    if c32 then L251() else L48();
  L281():
    z9 = force? z8;
    checkMissing(z9);
    c38 = `is.object`(z9);
    if c38 then L283() else L284(z9);
  L296():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L293(dx32);
  L297():
    dr30 = tryDispatchBuiltin.0("[<-", l25, dx33);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L299() else L298(dx33, dr30);
  L298(dx35, l27):
    good12 = ld good;
    check L300() else D106();
  D79():
    deopt 271 [1.0, r155];
  D106():
    deopt 374 [dx35, l27, dx33, good12];
  D107():
    deopt 380 [dimy2];
  L39(dx10):
    st yzero = dx10;
    goto L40();
  L48():
    xzero6 = ld xzero;
    check L259() else D97();
  L49():
    yzero = ld yzero;
    check L266() else D100();
  L206():
    dr8 = tryDispatchBuiltin.1("[", r145);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L208() else L207(dr8);
  L207(r147):
    wt19 = ld wt;
    check L209() else D73();
  L216():
    r156 = `/`(1.0, r155);
    st invmult = r156;
    goto L41();
  L251():
    xzero = ld xzero;
    check L252() else D95();
  L282(dx29):
    invmult = ld invmult;
    check L286() else D104();
  L283():
    dr24 = tryDispatchBuiltin.1("$", z9);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L285() else L284(dr24);
  L284(z11):
    r216 = `$`(z11, <sym residuals>);
    goto L282(r216);
  L299():
    dx37 = getTryDispatchBuiltinValue(dr30);
    goto L53(dx37);
  L300():
    good13 = force? good12;
    ___2 = ldf `[<-` in base;
    r225 = dyn ___2(l25, good13, <missing>, dx33);
    goto L53(r225);
  L301():
    dimy3 = force? dimy2;
    checkMissing(dimy3);
    c42 = `is.object`(dimy3);
    if c42 then L302() else L303(dimy3);
  D73():
    deopt 245 [r147, wt19];
  D95():
    deopt 326 [xzero];
  D97():
    deopt 333 [xzero6];
  D100():
    deopt 341 [yzero];
  D104():
    deopt 362 [dx29, invmult];
  L54(dx41):
    r227 = `==`(dx41, 1.0);
    c43 = `as.logical`(r227);
    if c43 then L305() else L55(c43);
  L208():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L39(dx9);
  L209():
    wt20 = force? wt19;
    checkMissing(wt20);
    r148 = `==`(wt20, 0.0);
    __4 = ldf `[` in base;
    r149 = dyn __4(r145, r148, <missing>);
    goto L39(r149);
  L252():
    xzero1 = force? xzero;
    checkMissing(xzero1);
    z = ld z;
    check L253() else D96();
  L259():
    xzero7 = force? xzero6;
    checkMissing(xzero7);
    z4 = ld z;
    check L260() else D98();
  L266():
    yzero1 = force? yzero;
    checkMissing(yzero1);
    fitted_zeros = ld `fitted.zeros`;
    check L267() else D101();
  L285():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L282(dx28);
  L286():
    invmult1 = force? invmult;
    checkMissing(invmult1);
    r217 = `*`(dx29, invmult1);
    l22 = ld z;
    c39 = `is.object`(l22);
    if c39 then L288() else L289(r217, l22);
  L302():
    dr32 = tryDispatchBuiltin.1("[", dimy3);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L304() else L303(dr32);
  L303(dimy5):
    __5 = ldf `[` in base;
    r226 = dyn __5(dimy5, 2);
    goto L54(r226);
  D96():
    deopt 327 [xzero1, z];
  D98():
    deopt 335 [z4];
  D101():
    deopt 342 [yzero1, fitted_zeros];
  L55(c45):
    c53 = `as.logical`(c45);
    if c53 then L310() else L57();
  L253():
    z1 = force? z;
    checkMissing(z1);
    c33 = `is.object`(z1);
    if c33 then L255() else L256(xzero1, z1);
  L260():
    z5 = force? z4;
    checkMissing(z5);
    c34 = `is.object`(z5);
    if c34 then L262() else L263(z5);
  L267():
    fitted_zeros1 = force? fitted_zeros;
    checkMissing(fitted_zeros1);
    r194 = `-`(yzero1, fitted_zeros1);
    l9 = ld z;
    c35 = `is.object`(l9);
    if c35 then L269() else L270(r194, l9, r194, l9);
  L287(r221, dx31):
    st z = dx31;
    goto L52();
  L288():
    dr26 = tryDispatchBuiltin.0("$<-", l22, r217);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L290() else L289(r217, dr26);
  L289(r219, l24):
    r222 = `$<-`(l24, <sym residuals>, r217);
    goto L287(r219, r222);
  L304():
    dx40 = getTryDispatchBuiltinValue(dr32);
    goto L54(dx40);
  L305():
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L306() else L307();
  L56(c48, r229):
    c50 = `as.logical`(r229);
    c51 = `&&`(c48, c50);
    goto L55(c51);
  L57():
    yname5 = ld yname;
    check L327() else D114();
  L59():
    as_matrix7 = ldf `as.matrix`;
    check L371() else D130();
  L254(xzero5, dx17):
    r190 = `*`(xzero5, dx17);
    st `fitted.zeros` = r190;
    goto L49();
  L255():
    dr14 = tryDispatchBuiltin.1("$", z1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L257() else L256(xzero1, dr14);
  L256(xzero3, z3):
    r189 = `$`(z3, <sym coefficients>);
    goto L254(xzero3, r189);
  L261(dx19):
    ___ = ldf `%*%` in base;
    r193 = dyn ___(xzero7, dx19);
    check L265() else D99();
  L262():
    dr16 = tryDispatchBuiltin.1("$", z5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L264() else L263(dr16);
  L263(z7):
    r192 = `$`(z7, <sym coefficients>);
    goto L261(r192);
  L268(r201, l15, r202, dx21):
    c36 = `is.object`(dx21);
    if c36 then L272() else L273(r201, l15, dx21);
  L269():
    dr18 = tryDispatchBuiltin.1("$", l9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L271() else L270(r194, l9, r194, dr18);
  L270(r197, l12, r198, l13):
    r203 = `$`(l13, <sym residuals>);
    goto L268(r197, l12, r198, r203);
  L290():
    dx30 = getTryDispatchBuiltinValue(dr26);
    goto L287(r217, dx30);
  L306():
    yname3 = ld yname;
    check L308() else D108();
  L307():
    r228 = dyn base16(<sym yname>);
    goto L56(c43, r228);
  L310():
    sym17 = ldf drop;
    base17 = ldf drop in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L311() else L312();
  D99():
    deopt 339 [r193];
  D108():
    deopt 388 [c43, yname3];
  D114():
    deopt 410 [yname5];
  D130():
    deopt 463 [];
  L50(r207, l19, dx25):
    c37 = `is.object`(l19);
    if c37 then L277() else L278(r207, l19);
  L58(r231):
    st resids = r231;
    xnames4 = ld xnames;
    check L315() else D111();
  L257():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L254(xzero1, dx16);
  L264():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L261(dx18);
  L265():
    st `fitted.zeros` = r193;
    goto L49();
  L271():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L268(r194, l9, r194, dx20);
  L272():
    dr20 = tryDispatchBuiltin.0("[<-", dx21, r202);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L274() else L273(r201, l15, dr20);
  L273(r205, l17, dx23):
    wt27 = ld wt;
    check L275() else D102();
  L308():
    yname4 = force? yname3;
    checkMissing(yname4);
    c49 = `==`(yname4, NULL);
    goto L56(c43, c49);
  L311():
    resids = ld resids;
    check L313() else D109();
  L312():
    r230 = dyn base17(<sym resids>);
    goto L58(r230);
  L327():
    yname6 = force? yname5;
    checkMissing(yname6);
    l37 = ld resids;
    colnames__ = ldf `colnames<-`;
    check L328() else D115();
  L371():
    p48 = prom<V +>{
      z16 = ld z;
      z17 = force? z16;
      checkMissing(z17);
      c63 = `is.object`(z17);
      if c63 then L1() else L2(z17);
    L0(dx59):
      return dx59;
    L1():
      dr50 = tryDispatchBuiltin.1("$", z17);
      dc25 = getTryDispatchBuiltinDispatched(dr50);
      if dc25 then L3() else L2(dr50);
    L2(z19):
      r276 = `$`(z19, <sym qr>);
      goto L0(r276);
    L3():
      dx58 = getTryDispatchBuiltinValue(dr50);
      goto L0(dx58);
    };
    r278 = dyn as_matrix7(p48);
    check L372() else D131();
  D102():
    deopt 349 [r205, l17, dx23, r202, wt27];
  D109():
    deopt 394 [resids];
  D111():
    deopt 399 [xnames4];
  D115():
    deopt 413 [yname6, l37, yname6];
  D131():
    deopt 465 [r278];
  L274():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L50(r201, l15, dx24);
  L275():
    wt28 = force? wt27;
    checkMissing(wt28);
    r208 = `==`(wt28, 0.0);
    ___1 = ldf `[<-` in base;
    r209 = dyn ___1(dx21, r208, <missing>, r202);
    goto L50(r205, l17, r209);
  L276(r213, dx27):
    st z = dx27;
    goto L51();
  L277():
    dr22 = tryDispatchBuiltin.0("$<-", l19, dx25);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L279() else L278(r207, dr22);
  L278(r211, l21):
    r214 = `$<-`(l21, <sym residuals>, dx25);
    goto L276(r211, r214);
  L313():
    resids1 = force? resids;
    checkMissing(resids1);
    drop = ldf drop in base;
    r232 = dyn drop(resids1);
    check L314() else D110();
  L315():
    xnames5 = force? xnames4;
    checkMissing(xnames5);
    l28 = ld z;
    c54 = `is.object`(l28);
    if c54 then L317() else L318(xnames5, l28, xnames5, l28);
  L328():
    r236 = dyn colnames__(l37, NULL, yname6);
    check L329() else D116();
  L372():
    l65 = ld z;
    c64 = `is.object`(l65);
    if c64 then L374() else L375(r278, l65);
  D110():
    deopt 397 [r232];
  D116():
    deopt 415 [yname6, r236];
  L279():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L276(r207, dx26);
  L314():
    goto L58(r232);
  L316(xnames12, l34, xnames13, dx43):
    names__ = ldf `names<-`;
    check L320() else D112();
  L317():
    dr34 = tryDispatchBuiltin.1("$", l28);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L319() else L318(xnames5, l28, xnames5, dr34);
  L318(xnames8, l31, xnames9, l32):
    r233 = `$`(l32, <sym coefficients>);
    goto L316(xnames8, l31, xnames9, r233);
  L329():
    st resids = r236;
    yname7 = ld yname;
    check L330() else D117();
  L373(dx61):
    st z = dx61;
    xnames21 = ld xnames;
    check L377() else D132();
  L374():
    dr52 = tryDispatchBuiltin.0("$<-", l65, r278);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L376() else L375(r278, dr52);
  L375(r280, l67):
    r283 = `$<-`(l67, <sym qr>, r278);
    goto L373(r283);
  D112():
    deopt 405 [xnames12, l34, dx43, xnames13];
  D117():
    deopt 417 [yname7];
  D132():
    deopt 469 [xnames21];
  L319():
    dx42 = getTryDispatchBuiltinValue(dr34);
    goto L316(xnames5, l28, xnames5, dx42);
  L320():
    r234 = dyn names__(dx43, NULL, xnames13);
    check L321() else D113();
  L330():
    yname8 = force? yname7;
    checkMissing(yname8);
    l38 = ld z;
    c56 = `is.object`(l38);
    if c56 then L332() else L333(yname8, l38, yname8, l38);
  L376():
    dx60 = getTryDispatchBuiltinValue(dr52);
    goto L373(dx60);
  L377():
    xnames22 = force? xnames21;
    checkMissing(xnames22);
    l68 = ld z;
    c65 = `is.object`(l68);
    if c65 then L379() else L380(xnames22, l68, xnames22, l68);
  D113():
    deopt 407 [xnames12, l34, r234];
  L321():
    c55 = `is.object`(l34);
    if c55 then L323() else L324(xnames12, l34);
  L331(yname15, l44, yname16, dx47):
    colnames__1 = ldf `colnames<-`;
    check L335() else D118();
  L332():
    dr38 = tryDispatchBuiltin.1("$", l38);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L334() else L333(yname8, l38, yname8, dr38);
  L333(yname11, l41, yname12, l42):
    r237 = `$`(l42, <sym effects>);
    goto L331(yname11, l41, yname12, r237);
  L378(xnames29, l74, xnames30, dx63):
    colnames__2 = ldf `colnames<-`;
    check L382() else D133();
  L379():
    dr54 = tryDispatchBuiltin.1("$", l68);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L381() else L380(xnames22, l68, xnames22, dr54);
  L380(xnames25, l71, xnames26, l72):
    r284 = `$`(l72, <sym qr>);
    goto L378(xnames25, l71, xnames26, r284);
  D118():
    deopt 423 [yname15, l44, dx47, yname16];
  D133():
    deopt 475 [xnames29, l74, dx63, xnames30];
  L322(xnames17, dx45):
    st z = dx45;
    goto L59();
  L323():
    dr36 = tryDispatchBuiltin.0("$<-", l34, r234);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L325() else L324(xnames12, dr36);
  L324(xnames15, l36):
    r235 = `$<-`(l36, <sym coefficients>, r234);
    goto L322(xnames15, r235);
  L334():
    dx46 = getTryDispatchBuiltinValue(dr38);
    goto L331(yname8, l38, yname8, dx46);
  L335():
    r238 = dyn colnames__1(dx47, NULL, yname16);
    check L336() else D119();
  L381():
    dx62 = getTryDispatchBuiltinValue(dr54);
    goto L378(xnames22, l68, xnames22, dx62);
  L382():
    r285 = dyn colnames__2(dx63, NULL, xnames30);
    check L383() else D134();
  D119():
    deopt 425 [yname15, l44, r238];
  D134():
    deopt 477 [xnames29, l74, r285];
  L325():
    dx44 = getTryDispatchBuiltinValue(dr36);
    goto L322(xnames12, dx44);
  L336():
    c57 = `is.object`(l44);
    if c57 then L338() else L339(yname15, l44);
  L383():
    c66 = `is.object`(l74);
    if c66 then L385() else L386(xnames29, l74);
  L337(dx49):
    st z = dx49;
    sym18 = ldf c;
    base18 = ldf c in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L341() else L342();
  L338():
    dr40 = tryDispatchBuiltin.0("$<-", l44, r238);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L340() else L339(yname15, dr40);
  L339(yname18, l46):
    r239 = `$<-`(l46, <sym effects>, r238);
    goto L337(r239);
  L384(dx65):
    st z = dx65;
    sym20 = ldf list;
    base20 = ldf list in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L388() else L389();
  L385():
    dr56 = tryDispatchBuiltin.0("$<-", l74, r285);
    dc28 = getTryDispatchBuiltinDispatched(dr56);
    if dc28 then L387() else L386(xnames29, dr56);
  L386(xnames32, l76):
    r286 = `$<-`(l76, <sym qr>, r285);
    goto L384(r286);
  L60(r241):
    l47 = ld z;
    c59 = `is.object`(l47);
    if c59 then L347() else L348(r241, l47, r241, l47);
  L62(r288):
    st output = r288;
    z24 = ld z;
    check L397() else D138();
  L340():
    dx48 = getTryDispatchBuiltinValue(dr40);
    goto L337(dx48);
  L341():
    ncx8 = ld ncx;
    check L343() else D120();
  L342():
    r240 = dyn base18(<sym ncx>, <sym ncy>);
    goto L60(r240);
  L387():
    dx64 = getTryDispatchBuiltinValue(dr56);
    goto L384(dx64);
  L388():
    z20 = ld z;
    check L390() else D135();
  L389():
    r287 = dyn base20[coefficients, residuals](<lang `$`(z, coefficients)>, <sym resids>);
    goto L62(r287);
  D120():
    deopt 430 [ncx8];
  D135():
    deopt 482 [z20];
  D138():
    deopt 492 [z24];
  L343():
    ncx9 = force? ncx8;
    checkMissing(ncx9);
    ncy2 = ld ncy;
    check L344() else D121();
  L346(r249, l53, r250, dx51):
    dim__1 = ldf `dim<-`;
    check L350() else D123();
  L347():
    dr42 = tryDispatchBuiltin.1("$", l47);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L349() else L348(r241, l47, r241, dr42);
  L348(r245, l50, r246, l51):
    r251 = `$`(l51, <sym coefficients>);
    goto L346(r245, l50, r246, r251);
  L390():
    z21 = force? z20;
    checkMissing(z21);
    c67 = `is.object`(z21);
    if c67 then L392() else L393(z21);
  L397():
    z25 = force? z24;
    checkMissing(z25);
    c68 = `is.object`(z25);
    if c68 then L399() else L400(z25);
  D121():
    deopt 432 [ncy2];
  D123():
    deopt 440 [r249, l53, dx51, r250];
  L344():
    ncy3 = force? ncy2;
    checkMissing(ncy3);
    c58 = ldf c in base;
    r242 = dyn c58(ncx9, ncy3);
    check L345() else D122();
  L349():
    dx50 = getTryDispatchBuiltinValue(dr42);
    goto L346(r241, l47, r241, dx50);
  L350():
    r252 = dyn dim__1(dx51, NULL, r250);
    check L351() else D124();
  L391(dx67):
    resids2 = ld resids;
    check L395() else D136();
  L392():
    dr58 = tryDispatchBuiltin.1("$", z21);
    dc29 = getTryDispatchBuiltinDispatched(dr58);
    if dc29 then L394() else L393(dr58);
  L393(z23):
    r289 = `$`(z23, <sym coefficients>);
    goto L391(r289);
  L398(dx69):
    ncx10 = ld ncx;
    check L402() else D139();
  L399():
    dr60 = tryDispatchBuiltin.1("$", z25);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L401() else L400(dr60);
  L400(z27):
    r291 = `$`(z27, <sym rank>);
    goto L398(r291);
  D122():
    deopt 435 [r242];
  D124():
    deopt 442 [r249, l53, r252];
  D136():
    deopt 486 [resids2];
  D139():
    deopt 494 [dx69, ncx10];
  L345():
    goto L60(r242);
  L351():
    c60 = `is.object`(l53);
    if c60 then L353() else L354(r249, l53);
  L394():
    dx66 = getTryDispatchBuiltinValue(dr58);
    goto L391(dx66);
  L395():
    resids3 = force? resids2;
    checkMissing(resids3);
    list1 = ldf list in base;
    r290 = dyn list1(dx67, resids3);
    check L396() else D137();
  L401():
    dx68 = getTryDispatchBuiltinValue(dr60);
    goto L398(dx68);
  L402():
    ncx11 = force? ncx10;
    checkMissing(ncx11);
    r292 = `!=`(dx69, ncx11);
    c69 = `as.logical`(r292);
    if c69 then L403() else L63();
  D137():
    deopt 490 [r290];
  L63():
    goto L66();
  L66():
    sym22 = ldf `is.null`;
    base22 = ldf `is.null` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L430() else L431();
  L352(dx53):
    st z = dx53;
    sym19 = ldf list;
    base19 = ldf list in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L356() else L357();
  L353():
    dr44 = tryDispatchBuiltin.0("$<-", l53, r252);
    dc22 = getTryDispatchBuiltinDispatched(dr44);
    if dc22 then L355() else L354(r249, dr44);
  L354(r254, l55):
    r257 = `$<-`(l55, <sym coefficients>, r252);
    goto L352(r257);
  L396():
    goto L62(r290);
  L403():
    xnames35 = ld xnames;
    check L404() else D140();
  D140():
    deopt 497 [xnames35];
  L61(r259):
    l56 = ld z;
    c61 = `is.object`(l56);
    if c61 then L362() else L363(r259, l56, r259, l56);
  L67(r316):
    r317 = `!`(r316);
    c75 = `as.logical`(r317);
    if c75 then L433() else L68();
  L355():
    dx52 = getTryDispatchBuiltinValue(dr44);
    goto L352(dx52);
  L356():
    xnames19 = ld xnames;
    check L358() else D125();
  L357():
    r258 = dyn base19(<sym xnames>, <sym yname>);
    goto L61(r258);
  L404():
    xnames36 = force? xnames35;
    checkMissing(xnames36);
    c70 = `is.object`(xnames36);
    if c70 then L405() else L406(xnames36);
  L430():
    wt29 = ld wt;
    check L432() else D148();
  L431():
    r315 = dyn base22(<sym wt>);
    goto L67(r315);
  D125():
    deopt 447 [xnames19];
  D148():
    deopt 527 [wt29];
  L64(dx71):
    st xnames = dx71;
    sym21 = ldf list;
    base21 = ldf list in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L413() else L414();
  L68():
    goto L74();
  L74():
    sym26 = ldf list;
    base26 = ldf list in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L455() else L456();
  L358():
    xnames20 = force? xnames19;
    checkMissing(xnames20);
    yname21 = ld yname;
    check L359() else D126();
  L361(r267, l62, r268, dx55):
    dimnames__ = ldf `dimnames<-`;
    check L365() else D128();
  L362():
    dr46 = tryDispatchBuiltin.1("$", l56);
    dc23 = getTryDispatchBuiltinDispatched(dr46);
    if dc23 then L364() else L363(r259, l56, r259, dr46);
  L363(r263, l59, r264, l60):
    r269 = `$`(l60, <sym coefficients>);
    goto L361(r263, l59, r264, r269);
  L405():
    dr62 = tryDispatchBuiltin.1("[", xnames36);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L407() else L406(dr62);
  L406(xnames38):
    z28 = ld z;
    check L408() else D141();
  L432():
    wt30 = force? wt29;
    checkMissing(wt30);
    c74 = `==`(wt30, NULL);
    goto L67(c74);
  L433():
    sym23 = ldf `rep.int`;
    base23 = ldf `rep.int` in base;
    guard23 = `==`.4(sym23, base23);
    if guard23 then L434() else L435();
  D126():
    deopt 449 [yname21];
  D128():
    deopt 457 [r267, l62, dx55, r268];
  D141():
    deopt 499 [xnames38, z28];
  L65(r296):
    l77 = ld z;
    c72 = `is.object`(l77);
    if c72 then L418() else L419(r296, l77, r296, l77);
  L69(r319):
    st weights = r319;
    wt31 = ld wt;
    check L441() else D151();
  L75(r331):
    st rqr = r331;
    l89 = ld rqr;
    oldClass__ = ldf `oldClass<-`;
    check L491() else D165();
  L359():
    yname22 = force? yname21;
    checkMissing(yname22);
    list = ldf list in base;
    r260 = dyn list(xnames20, yname22);
    check L360() else D127();
  L364():
    dx54 = getTryDispatchBuiltinValue(dr46);
    goto L361(r259, l56, r259, dx54);
  L365():
    r270 = dyn dimnames__(dx55, NULL, r268);
    check L366() else D129();
  L407():
    dx70 = getTryDispatchBuiltinValue(dr62);
    goto L64(dx70);
  L408():
    z29 = force? z28;
    checkMissing(z29);
    c71 = `is.object`(z29);
    if c71 then L410() else L411(xnames38, z29);
  L413():
    xnames43 = ld xnames;
    check L415() else D142();
  L414():
    r295 = dyn base21(NULL, <sym xnames>);
    goto L65(r295);
  L434():
    dimy6 = ld dimy;
    check L436() else D149();
  L435():
    r318 = dyn base23(NA_LGL, <lang `[`(dimy, 1)>);
    goto L69(r318);
  L455():
    sym27 = ldf drop;
    base27 = ldf drop in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L457() else L458();
  L456():
    r330 = dyn base26[qt, qr, qraux, rank, pivot, tol](<lang drop(`$`(z, effects))>, <lang `$`(z, qr)>, <lang `$`(z, qraux)>, <lang `$`(z, rank)>, <lang `$`(z, pivot)>, <lang `$`(z, tol)>);
    goto L75(r330);
  D127():
    deopt 452 [r260];
  D129():
    deopt 459 [r267, l62, r270];
  D142():
    deopt 507 [xnames43];
  D149():
    deopt 534 [dimy6];
  D151():
    deopt 542 [wt31];
  D165():
    deopt 601 ["qr", l89, "qr"];
  L76(r333):
    z36 = ld z;
    check L465() else D159();
  L360():
    goto L61(r260);
  L366():
    c62 = `is.object`(l62);
    if c62 then L368() else L369(r267, l62);
  L409(xnames42, dx73):
    __6 = ldf `[` in base;
    r294 = dyn __6(xnames42, dx73);
    goto L64(r294);
  L410():
    dr64 = tryDispatchBuiltin.1("$", z29);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L412() else L411(xnames38, dr64);
  L411(xnames40, z31):
    r293 = `$`(z31, <sym pivot>);
    goto L409(xnames40, r293);
  L415():
    xnames44 = force? xnames43;
    checkMissing(xnames44);
    list2 = ldf list in base;
    r297 = dyn list2(NULL, xnames44);
    check L416() else D143();
  L417(r304, l83, r305, dx75):
    dimnames__1 = ldf `dimnames<-`;
    check L421() else D144();
  L418():
    dr66 = tryDispatchBuiltin.1("$", l77);
    dc33 = getTryDispatchBuiltinDispatched(dr66);
    if dc33 then L420() else L419(r296, l77, r296, dr66);
  L419(r300, l80, r301, l81):
    r306 = `$`(l81, <sym qr>);
    goto L417(r300, l80, r301, r306);
  L436():
    dimy7 = force? dimy6;
    checkMissing(dimy7);
    c76 = `is.object`(dimy7);
    if c76 then L437() else L438(dimy7);
  L441():
    wt32 = force? wt31;
    checkMissing(wt32);
    l86 = ld weights;
    c77 = `is.object`(l86);
    if c77 then L442() else L443(wt32, l86);
  L457():
    z32 = ld z;
    check L459() else D157();
  L458():
    r332 = dyn base27(<lang `$`(z, effects)>);
    goto L76(r332);
  L491():
    r342 = dyn oldClass__(l89, NULL, "qr");
    check L492() else D166();
  D143():
    deopt 510 [r297];
  D144():
    deopt 515 [r304, l83, dx75, r305];
  D157():
    deopt 569 [z32];
  D159():
    deopt 575 [z36];
  D166():
    deopt 603 ["qr", r342];
  L70(dx79):
    rep_int = ldf `rep.int` in base;
    r321 = dyn rep_int(NA_LGL, dx79);
    check L440() else D150();
  L71(dx81):
    st weights = dx81;
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L446() else L447();
  L367(r274, dx57):
    st z = dx57;
    goto L59();
  L368():
    dr48 = tryDispatchBuiltin.0("$<-", l62, r270);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L370() else L369(r267, dr48);
  L369(r272, l64):
    r275 = `$<-`(l64, <sym coefficients>, r270);
    goto L367(r272, r275);
  L412():
    dx72 = getTryDispatchBuiltinValue(dr64);
    goto L409(xnames38, dx72);
  L416():
    goto L65(r297);
  L420():
    dx74 = getTryDispatchBuiltinValue(dr66);
    goto L417(r296, l77, r296, dx74);
  L421():
    r307 = dyn dimnames__1(dx75, NULL, r305);
    check L422() else D145();
  L437():
    dr70 = tryDispatchBuiltin.1("[", dimy7);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L439() else L438(dr70);
  L438(dimy9):
    __7 = ldf `[` in base;
    r320 = dyn __7(dimy9, 1);
    goto L70(r320);
  L442():
    dr72 = tryDispatchBuiltin.0("[<-", l86, wt32);
    dc36 = getTryDispatchBuiltinDispatched(dr72);
    if dc36 then L444() else L443(wt32, dr72);
  L443(wt34, l88):
    good14 = ld good;
    check L445() else D152();
  L459():
    z33 = force? z32;
    checkMissing(z33);
    c79 = `is.object`(z33);
    if c79 then L461() else L462(z33);
  L465():
    z37 = force? z36;
    checkMissing(z37);
    c80 = `is.object`(z37);
    if c80 then L467() else L468(z37);
  L492():
    st rqr = r342;
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L493() else L494();
  D145():
    deopt 517 [r304, l83, r307];
  D150():
    deopt 540 [r321];
  D152():
    deopt 545 [wt34, l88, wt32, good14];
  L72(r324):
    st output = r324;
    goto L74();
  L77(r344):
    st output = r344;
    output4 = ld output;
    check L502() else D172();
  L370():
    dx56 = getTryDispatchBuiltinValue(dr48);
    goto L367(r267, dx56);
  L422():
    c73 = `is.object`(l83);
    if c73 then L424() else L425(r304, l83);
  L439():
    dx78 = getTryDispatchBuiltinValue(dr70);
    goto L70(dx78);
  L440():
    goto L69(r321);
  L444():
    dx80 = getTryDispatchBuiltinValue(dr72);
    goto L71(dx80);
  L445():
    good15 = force? good14;
    ___3 = ldf `[<-` in base;
    r322 = dyn ___3(l88, wt32, good15);
    goto L71(r322);
  L446():
    output = ld output;
    check L448() else D153();
  L447():
    r323 = dyn base24(<sym output>, <lang list(wt=weights)>);
    goto L72(r323);
  L460(dx83):
    drop1 = ldf drop in base;
    r335 = dyn drop1(dx83);
    check L464() else D158();
  L461():
    dr74 = tryDispatchBuiltin.1("$", z33);
    dc37 = getTryDispatchBuiltinDispatched(dr74);
    if dc37 then L463() else L462(dr74);
  L462(z35):
    r334 = `$`(z35, <sym effects>);
    goto L460(r334);
  L466(dx85):
    z40 = ld z;
    check L470() else D160();
  L467():
    dr76 = tryDispatchBuiltin.1("$", z37);
    dc38 = getTryDispatchBuiltinDispatched(dr76);
    if dc38 then L469() else L468(dr76);
  L468(z39):
    r336 = `$`(z39, <sym qr>);
    goto L466(r336);
  L493():
    output2 = ld output;
    check L495() else D167();
  L494():
    r343 = dyn base28(<sym output>, <lang list(intercept=intercept, qr=rqr)>);
    goto L77(r343);
  D153():
    deopt 551 [output];
  D158():
    deopt 573 [r335];
  D160():
    deopt 579 [z40];
  D167():
    deopt 607 [output2];
  D172():
    deopt 622 [output4];
  L423(dx77):
    st z = dx77;
    warning1 = ldf warning;
    check L427() else D146();
  L424():
    dr68 = tryDispatchBuiltin.0("$<-", l83, r307);
    dc34 = getTryDispatchBuiltinDispatched(dr68);
    if dc34 then L426() else L425(r304, dr68);
  L425(r309, l85):
    r312 = `$<-`(l85, <sym qr>, r307);
    goto L423(r312);
  L448():
    output1 = force? output;
    checkMissing(output1);
    sym25 = ldf list;
    base25 = ldf list in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L449() else L450();
  L463():
    dx82 = getTryDispatchBuiltinValue(dr74);
    goto L460(dx82);
  L464():
    goto L76(r335);
  L469():
    dx84 = getTryDispatchBuiltinValue(dr76);
    goto L466(dx84);
  L470():
    z41 = force? z40;
    checkMissing(z41);
    c81 = `is.object`(z41);
    if c81 then L472() else L473(z41);
  L495():
    output3 = force? output2;
    checkMissing(output3);
    sym29 = ldf list;
    base29 = ldf list in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L496() else L497();
  L502():
    output5 = force? output4;
    checkMissing(output5);
    popenv;
    return output5;
  D146():
    deopt 521 [];
  L73(r326):
    c78 = ldf c in base;
    r328 = dyn c78(output1, r326);
    check L453() else D156();
  L78(r346):
    c85 = ldf c in base;
    r348 = dyn c85(output3, r346);
    check L501() else D171();
  L426():
    dx76 = getTryDispatchBuiltinValue(dr68);
    goto L423(dx76);
  L427():
    r313 = dyn warning1("'X' matrix was collinear");
    check L428() else D147();
  L449():
    weights = ld weights;
    check L451() else D154();
  L450():
    r325 = dyn base25[wt](<sym weights>);
    goto L73(r325);
  L471(dx87):
    z44 = ld z;
    check L475() else D161();
  L472():
    dr78 = tryDispatchBuiltin.1("$", z41);
    dc39 = getTryDispatchBuiltinDispatched(dr78);
    if dc39 then L474() else L473(dr78);
  L473(z43):
    r337 = `$`(z43, <sym qraux>);
    goto L471(r337);
  L496():
    intercept3 = ld intercept;
    check L498() else D168();
  L497():
    r345 = dyn base29[intercept, qr](<sym intercept>, <sym rqr>);
    goto L78(r345);
  D147():
    deopt 523 [r313];
  D154():
    deopt 555 [weights];
  D156():
    deopt 561 [r328];
  D161():
    deopt 583 [z44];
  D168():
    deopt 611 [intercept3];
  D171():
    deopt 620 [r348];
  L428():
    goto L66();
  L451():
    weights1 = force? weights;
    checkMissing(weights1);
    list3 = ldf list in base;
    r327 = dyn list3(weights1);
    check L452() else D155();
  L453():
    goto L72(r328);
  L474():
    dx86 = getTryDispatchBuiltinValue(dr78);
    goto L471(dx86);
  L475():
    z45 = force? z44;
    checkMissing(z45);
    c82 = `is.object`(z45);
    if c82 then L477() else L478(z45);
  L498():
    intercept4 = force? intercept3;
    checkMissing(intercept4);
    rqr = ld rqr;
    check L499() else D169();
  L501():
    goto L77(r348);
  D155():
    deopt 559 [r327];
  D169():
    deopt 614 [rqr];
  L452():
    goto L73(r327);
  L476(dx89):
    z48 = ld z;
    check L480() else D162();
  L477():
    dr80 = tryDispatchBuiltin.1("$", z45);
    dc40 = getTryDispatchBuiltinDispatched(dr80);
    if dc40 then L479() else L478(dr80);
  L478(z47):
    r338 = `$`(z47, <sym rank>);
    goto L476(r338);
  L499():
    rqr1 = force? rqr;
    checkMissing(rqr1);
    list5 = ldf list in base;
    r347 = dyn list5(intercept4, rqr1);
    check L500() else D170();
  D162():
    deopt 587 [z48];
  D170():
    deopt 618 [r347];
  L479():
    dx88 = getTryDispatchBuiltinValue(dr80);
    goto L476(dx88);
  L480():
    z49 = force? z48;
    checkMissing(z49);
    c83 = `is.object`(z49);
    if c83 then L482() else L483(z49);
  L500():
    goto L78(r347);
  L481(dx91):
    z52 = ld z;
    check L485() else D163();
  L482():
    dr82 = tryDispatchBuiltin.1("$", z49);
    dc41 = getTryDispatchBuiltinDispatched(dr82);
    if dc41 then L484() else L483(dr82);
  L483(z51):
    r339 = `$`(z51, <sym pivot>);
    goto L481(r339);
  D163():
    deopt 591 [z52];
  L484():
    dx90 = getTryDispatchBuiltinValue(dr82);
    goto L481(dx90);
  L485():
    z53 = force? z52;
    checkMissing(z53);
    c84 = `is.object`(z53);
    if c84 then L487() else L488(z53);
  L486(dx93):
    list4 = ldf list in base;
    r341 = dyn list4(r333, dx85, dx87, dx89, dx91, dx93);
    check L490() else D164();
  L487():
    dr84 = tryDispatchBuiltin.1("$", z53);
    dc42 = getTryDispatchBuiltinDispatched(dr84);
    if dc42 then L489() else L488(dr84);
  L488(z55):
    r340 = `$`(z55, <sym tol>);
    goto L486(r340);
  D164():
    deopt 596 [r341];
  L489():
    dx92 = getTryDispatchBuiltinValue(dr84);
    goto L486(dx92);
  L490():
    goto L75(r341);
  }
}