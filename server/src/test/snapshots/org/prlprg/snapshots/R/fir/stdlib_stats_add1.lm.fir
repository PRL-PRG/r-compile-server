fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1466028735;
    st `add1.lm` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1466028735(object, scope, scale, test, x, k, `...`) {
  (reg object:*, reg scope:*, reg scale:*, reg test:*, reg x:*, reg k:*, reg ddd:dots) -+> V { var object:*, var scope:*, var scale:*, reg scale_isMissing:L, reg scale_orDefault:*, var test:*, reg test_isMissing:L, reg test_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var x:*, reg x_isMissing:L, reg x_orDefault:*, var k:*, reg k_isMissing:L, reg k_orDefault:*, var `...`:dots?, reg r4:cls, reg check_exact:cls, reg object1:*, reg object2:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg missing:cls, reg r9:V, reg c1:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg c6:L, reg r11:V, reg scope1:*, reg scope2:V, reg c7:V, reg c8:L, reg c9:V, reg c11:L, reg stop:cls, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg scope3:*, reg scope4:V, reg c12:L, reg r16:V, reg c13:L, reg add_scope:cls, reg object3:*, reg object4:V, reg p2:p(V +), reg update_formula:cls, reg object5:*, reg object6:V, reg p3:p(V +), reg scope5:*, reg scope6:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg scope7:*, reg scope8:V, reg length:cls, reg r26:V, reg r27:V, reg c14:L, reg stop1:cls, reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg object7:*, reg object8:V, reg c15:L, reg object10:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r32:V, reg attr:cls, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r34:V, reg r35:V, reg object11:*, reg object12:V, reg c16:L, reg object14:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r36:V, reg attr1:cls, reg r37:V, reg object15:*, reg object16:V, reg c17:L, reg object18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r38:V, reg object19:*, reg object20:V, reg c18:L, reg dx7:V, reg object22:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg dx11:V, reg r39:V, reg r40:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg scope9:*, reg scope10:V, reg length1:cls, reg r43:V, reg numeric:cls, reg ns:*, reg ns1:V, reg r44:V, reg p6:p(V +), reg r46:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg scope11:*, reg scope12:V, reg c19:cls, reg r49:V, reg l:*, reg names__:cls, reg r50:V, reg dfs:*, reg dfs1:V, reg eval:cls, reg str2lang:cls, reg paste:cls, reg paste1:cls, reg scope13:*, reg scope14:V, reg p7:p(V +), reg r52:V, reg p8:p(V +), reg r54:V, reg p9:p(V +), reg r56:V, reg p10:p(V +), reg r58:V, reg update_formula1:cls, reg object23:*, reg object24:V, reg p11:p(V +), reg add_rhs:*, reg add_rhs1:V, reg p12:p(V +), reg r61:V, reg terms:cls, reg new_form:*, reg new_form1:V, reg p13:p(V +), reg r63:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r64:V, reg r65:V, reg x1:*, reg x2:V, reg c20:V, reg c21:L, reg object25:*, reg object26:V, reg c22:L, reg object28:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r66:V, reg Terms:*, reg Terms1:V, reg l1:*, reg c23:L, reg Terms3:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg r67:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r68:V, reg r69:V, reg fc:*, reg fc1:V, reg Terms6:*, reg Terms7:V, reg list:cls, reg r70:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r71:V, reg r72:V, reg object29:*, reg object30:V, reg oldClass:cls, reg r73:V, reg l4:*, reg class__:cls, reg r74:V, reg model_frame:cls, reg fob:*, reg fob1:V, reg p14:p(V +), reg object31:*, reg object32:V, reg c24:L, reg object34:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r76:V, reg p15:p(V +), reg r78:V, reg model_matrix:cls, reg Terms8:*, reg Terms9:V, reg p16:p(V +), reg m:*, reg m1:V, reg p17:p(V +), reg object35:*, reg object36:V, reg c25:L, reg object38:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg r81:V, reg p18:p(V +), reg r83:V, reg model_offset:cls, reg m2:*, reg m3:V, reg p19:p(V +), reg r85:V, reg model_weights:cls, reg m4:*, reg m5:V, reg p20:p(V +), reg r87:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r88:V, reg r89:V, reg y:*, reg y1:V, reg length2:cls, reg r90:V, reg model_response:cls, reg m6:*, reg m7:V, reg p21:p(V +), reg r92:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r93:V, reg r94:V, reg y2:*, reg y3:V, reg length3:cls, reg r95:V, reg newn:*, reg newn1:V, reg oldn:*, reg oldn1:V, reg r96:V, reg c26:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg newn2:*, reg newn3:V, reg p22:p(V +), reg r98:V, reg p23:p(V +), reg newn4:*, reg newn5:V, reg p24:p(V +), reg oldn2:*, reg oldn3:V, reg p25:p(V +), reg r102:V, reg p26:p(V +), reg r104:V, reg r105:V, reg object39:*, reg object40:V, reg c27:L, reg object42:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r107:V, reg object43:*, reg object44:V, reg c28:L, reg object46:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r108:V, reg nrow:cls, reg x3:*, reg x4:V, reg p27:p(V +), reg r110:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r111:V, reg r112:V, reg Terms10:*, reg Terms11:V, reg attr2:cls, reg r113:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r114:V, reg r115:V, reg x5:*, reg x6:V, reg attr3:cls, reg r116:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r117:V, reg r118:V, reg asgn:*, reg asgn1:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r119:V, reg r120:V, reg oTerms:*, reg oTerms1:V, reg Terms12:*, reg Terms13:V, reg match:cls, reg r121:V, reg match1:cls, reg r122:V, reg r123:V, reg int:*, reg int1:V, reg c29:L, reg l5:*, reg c30:L, reg r125:L, reg l7:*, reg dr20:V, reg dc10:L, reg dx24:V, reg r127:L, reg dx25:V, reg ___:cls, reg r128:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r130:V, reg r131:V, reg wt:*, reg wt1:V, reg c31:V, reg r132:V, reg x7:*, reg x8:V, reg c32:L, reg x10:V, reg dr22:V, reg dc11:L, reg dx26:V, reg dx27:V, reg ousex:*, reg ousex1:V, reg __:cls, reg r133:V, reg iswt:*, reg iswt1:V, reg c33:L, reg lm_wfit:cls, reg X:*, reg X1:V, reg p28:p(V +), reg y4:*, reg y5:V, reg p29:p(V +), reg wt2:*, reg wt3:V, reg p30:p(V +), reg offset:*, reg offset1:V, reg p31:p(V +), reg r138:V, reg r139:V, reg lm_fit:cls, reg X2:*, reg X3:V, reg p32:p(V +), reg y6:*, reg y7:V, reg p33:p(V +), reg offset2:*, reg offset3:V, reg p34:p(V +), reg r143:V, reg z:*, reg z1:V, reg c34:L, reg z3:V, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg r144:V, reg l8:*, reg c35:L, reg dx31:V, reg l10:*, reg dr26:V, reg dc13:L, reg dx33:V, reg dx35:V, reg ___1:cls, reg r145:V, reg l11:*, reg class__1:cls, reg r146:V, reg deviance:cls, reg z4:*, reg z5:V, reg p35:p(V +), reg r148:V, reg l12:*, reg c36:L, reg r150:V, reg l14:*, reg dr28:V, reg dc14:L, reg dx36:V, reg dx37:V, reg ___2:cls, reg r153:V, reg sapply:cls, reg strsplit:cls, reg Terms14:*, reg Terms15:V, reg p36:p(V +), reg r155:V, reg p37:p(V +), reg r157:cls, reg p38:p(V +), reg r159:V, reg scope15:*, reg scope16:V, reg s:V, reg l15:I, reg i:I, reg i1:I, reg i2:I, reg c37:L, reg x11:V, reg paste2:cls, reg sort:cls, reg strsplit1:cls, reg tt:*, reg tt1:V, reg p39:p(V +), reg r161:V, reg c38:L, reg r163:V, reg dr30:V, reg dc15:L, reg dx38:V, reg dx39:V, reg __1:cls, reg r164:V, reg p40:p(V +), reg r166:V, reg p41:p(V +), reg r168:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r169:V, reg i7:I, reg r170:V, reg asgn2:*, reg asgn3:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r171:V, reg i10:I, reg r172:V, reg stt:*, reg stt1:V, reg sTerms:*, reg sTerms1:V, reg match2:cls, reg r173:V, reg match3:cls, reg r174:V, reg r175:V, reg x12:*, reg x13:V, reg c39:L, reg i12:I, reg x15:V, reg dr32:V, reg dc16:L, reg dx40:V, reg i14:I, reg dx41:V, reg usex:*, reg usex1:V, reg ousex2:*, reg ousex3:V, reg r176:V, reg __2:cls, reg r177:V, reg iswt2:*, reg iswt3:V, reg c40:L, reg lm_wfit1:cls, reg X4:*, reg X5:V, reg p42:p(V +), reg y8:*, reg y9:V, reg p43:p(V +), reg wt4:*, reg wt5:V, reg p44:p(V +), reg offset4:*, reg offset5:V, reg p45:p(V +), reg r182:V, reg i17:I, reg r183:V, reg lm_fit1:cls, reg X6:*, reg X7:V, reg p46:p(V +), reg y10:*, reg y11:V, reg p47:p(V +), reg offset6:*, reg offset7:V, reg p48:p(V +), reg r187:V, reg l16:*, reg class__2:cls, reg r188:V, reg z6:*, reg z7:V, reg c41:L, reg i19:I, reg z9:V, reg dr34:V, reg dc17:L, reg dx42:V, reg i21:I, reg dx43:V, reg r189:V, reg l17:*, reg c42:L, reg i23:I, reg dx45:V, reg l19:*, reg dr36:V, reg dc18:L, reg dx47:V, reg i25:I, reg dx49:V, reg tt2:*, reg tt3:V, reg ___3:cls, reg r190:V, reg deviance1:cls, reg z10:*, reg z11:V, reg p49:p(V +), reg r192:V, reg l20:*, reg c43:L, reg i27:I, reg r194:V, reg l22:*, reg dr38:V, reg dc19:L, reg dx50:V, reg i29:I, reg dx51:V, reg tt4:*, reg tt5:V, reg ___4:cls, reg r197:V, reg scale1:*, reg scale2:V, reg r198:V, reg c44:L, reg RSS:*, reg RSS1:V, reg scale3:*, reg scale4:V, reg r199:V, reg n:*, reg n1:V, reg r200:V, reg k1:*, reg k2:V, reg dfs2:*, reg dfs3:V, reg r201:V, reg r202:V, reg n2:*, reg n3:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r204:V, reg n6:V, reg r205:V, reg RSS2:*, reg RSS3:V, reg n7:*, reg n8:V, reg r206:V, reg r207:V, reg r208:V, reg k3:*, reg k4:V, reg dfs4:*, reg dfs5:V, reg r209:V, reg r210:V, reg dfs6:*, reg dfs7:V, reg dfs8:*, reg dfs9:V, reg c45:L, reg dfs12:V, reg dfs13:V, reg dr40:V, reg dc20:L, reg dx52:V, reg dfs15:V, reg dx53:V, reg __3:cls, reg r211:V, reg r212:V, reg l23:*, reg c46:L, reg r214:L, reg l25:*, reg dr42:V, reg dc21:L, reg dx54:V, reg dx55:V, reg ___5:cls, reg r217:V, reg data_frame:cls, reg dfs16:*, reg dfs17:V, reg p50:p(V +), reg sym22:cls, reg base22:cls, reg guard22:L, reg r219:V, reg r220:V, reg RSS4:*, reg RSS5:V, reg c47:L, reg RSS7:V, reg dr44:V, reg dc22:L, reg dx56:V, reg dx57:V, reg __4:cls, reg r221:V, reg RSS8:*, reg RSS9:V, reg c48:L, reg dx59:V, reg RSS11:V, reg dr46:V, reg dc23:L, reg dx61:V, reg dx62:V, reg dx63:V, reg __5:cls, reg r222:V, reg r223:V, reg c49:cls, reg r224:V, reg p51:p(V +), reg RSS12:*, reg RSS13:V, reg p52:p(V +), reg aic:*, reg aic1:V, reg p53:p(V +), reg sym23:cls, reg base23:cls, reg guard23:L, reg r228:V, reg r229:V, reg dfs18:*, reg dfs19:V, reg names:cls, reg r230:V, reg p54:p(V +), reg r232:V, reg scale5:*, reg scale6:V, reg r233:V, reg c50:L, reg sym24:cls, reg base24:cls, reg guard24:L, reg r234:V, reg r235:V, reg c51:cls, reg r236:V, reg l26:*, reg names__1:cls, reg r237:V, reg match_arg:cls, reg test1:*, reg test2:V, reg p55:p(V +), reg r240:V, reg test3:*, reg test4:V, reg r241:V, reg c52:L, reg aod:*, reg aod1:V, reg c53:L, reg aod3:V, reg dr48:V, reg dc24:L, reg dx64:V, reg dx65:V, reg r242:V, reg scale7:*, reg scale8:V, reg r243:V, reg c54:L, reg n9:*, reg n10:V, reg sym25:cls, reg base25:cls, reg guard25:L, reg r244:V, reg n13:V, reg r245:V, reg RSS14:*, reg RSS15:V, reg n14:*, reg n15:V, reg r246:V, reg r247:V, reg r248:V, reg dev:*, reg dev1:V, reg c55:L, reg dev3:V, reg dr50:V, reg dc25:L, reg dx66:V, reg dx67:V, reg __6:cls, reg r249:V, reg dev4:*, reg dev5:V, reg r250:V, reg l27:*, reg c56:L, reg r252:L, reg l29:*, reg dr52:V, reg dc26:L, reg dx68:V, reg r254:L, reg dx69:V, reg ___6:cls, reg r255:V, reg dev6:*, reg dev7:V, reg scale9:*, reg scale10:V, reg r257:V, reg aod4:*, reg aod5:V, reg c57:L, reg aod7:V, reg dr54:V, reg dc27:L, reg dx70:V, reg dx71:V, reg r258:V, reg sym26:cls, reg base26:cls, reg guard26:L, reg r259:V, reg r260:V, reg df:*, reg df1:V, reg is_na:cls, reg r261:V, reg r262:V, reg safe_pchisq:cls, reg dev8:*, reg dev9:V, reg c58:L, reg dev11:V, reg dr56:V, reg dc28:L, reg dx72:V, reg dx73:V, reg nas:*, reg nas1:V, reg __7:cls, reg r263:V, reg p56:p(V +), reg df2:*, reg df3:V, reg c59:L, reg df5:V, reg dr58:V, reg dc29:L, reg dx74:V, reg dx75:V, reg nas2:*, reg nas3:V, reg __8:cls, reg r265:V, reg p57:p(V +), reg r267:V, reg l30:*, reg c60:L, reg r269:V, reg l32:*, reg dr60:V, reg dc30:L, reg dx76:V, reg dx77:V, reg nas4:*, reg nas5:V, reg ___7:cls, reg r272:V, reg dev12:*, reg dev13:V, reg l33:*, reg c61:L, reg dev15:V, reg dr62:V, reg dc31:L, reg dx78:V, reg dev17:V, reg dx79:V, reg ___8:cls, reg r273:V, reg test5:*, reg test6:V, reg r274:V, reg c62:L, reg object47:*, reg object48:V, reg c63:L, reg object50:V, reg dr64:V, reg dc32:L, reg dx80:V, reg dx81:V, reg r275:V, reg Fstat:cls, reg aod8:*, reg aod9:V, reg p58:p(V +), reg aod10:*, reg aod11:V, reg c64:L, reg aod13:V, reg dr66:V, reg dc33:L, reg dx82:V, reg dx83:V, reg r277:V, reg c65:L, reg dx85:V, reg dr68:V, reg dc34:L, reg dx86:V, reg dx87:V, reg __9:cls, reg r278:V, reg p59:p(V +), reg rdf:*, reg rdf1:V, reg p60:p(V +), reg r281:V, reg l36:*, reg c66:L, reg r283:V, reg l38:*, reg dr70:V, reg dc35:L, reg dx88:V, reg r285:V, reg dx89:V, reg sym27:cls, reg base27:cls, reg guard27:L, reg r290:V, reg r291:V, reg r292:V, reg r293:V, reg c67:cls, reg r294:V, reg ___9:cls, reg r295:V, reg sym28:cls, reg base28:cls, reg guard28:L, reg r296:V, reg r297:V, reg deparse:cls, reg formula:cls, reg object51:*, reg object52:V, reg p61:p(V +), reg r299:V, reg p62:p(V +), reg r301:V, reg scale11:*, reg scale12:V, reg r302:V, reg c68:L, reg paste3:cls, reg format:cls, reg scale13:*, reg scale14:V, reg p63:p(V +), reg r304:V, reg p64:p(V +), reg r306:V, reg r307:V, reg c69:cls, reg r308:V, reg sym29:cls, reg base29:cls, reg guard29:L, reg r309:V, reg r310:V, reg c70:cls, reg r311:V, reg l42:*, reg class__3:cls, reg r312:V, reg head:*, reg head1:V, reg l43:*, reg attr__:cls, reg r313:V, reg aod14:*, reg aod15:V |
    mkenv;
    st object = object;
    st scope = scope;
    scale_isMissing = missing.0(scale);
    if scale_isMissing then L0(0.0) else L0(scale);
  L0(scale_orDefault):
    st scale = scale_orDefault;
    test_isMissing = missing.0(test);
    if test_isMissing then L1() else L2(test);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("none", "Chisq", "F");
      goto L0(r2);
    L2():
      r = dyn base("none", "Chisq", "F");
      goto L0(r);
    };
    goto L2(p);
  L2(test_orDefault):
    st test = test_orDefault;
    x_isMissing = missing.0(x);
    if x_isMissing then L3(NULL) else L3(x);
  L3(x_orDefault):
    st x = x_orDefault;
    k_isMissing = missing.0(k);
    if k_isMissing then L4(2.0) else L4(k);
  L4(k_orDefault):
    st k = k_orDefault;
    st `...` = ddd;
    r4 = clos inner157652812;
    st Fstat = r4;
    check_exact = ldf check_exact;
    check L76() else D0();
  D0():
    deopt 4 [];
  L76():
    p1 = prom<V +>{
      object1 = ld object;
      object2 = force? object1;
      checkMissing(object2);
      return object2;
    };
    r6 = dyn check_exact(p1);
    check L77() else D1();
  D1():
    deopt 6 [r6];
  L77():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L78() else L79();
  L5(r8):
    c1 = `as.logical`(r8);
    if c1 then L6(c1) else L80();
  L78():
    missing = ldf missing in base;
    r9 = dyn missing(<sym scope>);
    goto L5(r9);
  L79():
    r7 = dyn base1(<sym scope>);
    goto L5(r7);
  L6(c2):
    c11 = `as.logical`(c2);
    if c11 then L85() else L8();
  L80():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L81() else L82();
  L7(c6, r11):
    c8 = `as.logical`(r11);
    c9 = `||`(c6, c8);
    goto L6(c9);
  L8():
    goto L9();
  L9():
    sym3 = ldf `is.character`;
    base3 = ldf `is.character` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L89() else L90();
  L81():
    scope1 = ld scope;
    check L83() else D2();
  L82():
    r10 = dyn base2(<sym scope>);
    goto L7(c1, r10);
  L85():
    stop = ldf stop;
    check L86() else D3();
  D2():
    deopt 11 [c1, scope1];
  D3():
    deopt 16 [];
  L10(r15):
    r16 = `!`(r15);
    c13 = `as.logical`(r16);
    if c13 then L92() else L11();
  L83():
    scope2 = force? scope1;
    checkMissing(scope2);
    c7 = `==`(scope2, NULL);
    goto L7(c1, c7);
  L86():
    r12 = dyn stop("no terms in scope");
    check L87() else D4();
  L89():
    scope3 = ld scope;
    check L91() else D5();
  L90():
    r14 = dyn base3(<sym scope>);
    goto L10(r14);
  D4():
    deopt 18 [r12];
  D5():
    deopt 22 [scope3];
  L11():
    goto L12();
  L12():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L96() else L97();
  L87():
    goto L9();
  L91():
    scope4 = force? scope3;
    checkMissing(scope4);
    c12 = `is.character`(scope4);
    goto L10(c12);
  L92():
    add_scope = ldf `add.scope`;
    check L93() else D6();
  D6():
    deopt 27 [];
  L13(r25):
    r27 = `!`(r25);
    c14 = `as.logical`(r27);
    if c14 then L100() else L14();
  L93():
    p2 = prom<V +>{
      object3 = ld object;
      object4 = force? object3;
      checkMissing(object4);
      return object4;
    };
    p5 = prom<V +>{
      update_formula = ldf `update.formula`;
      p3 = prom<V +>{
        object5 = ld object;
        object6 = force? object5;
        checkMissing(object6);
        return object6;
      };
      p4 = prom<V +>{
        scope5 = ld scope;
        scope6 = force? scope5;
        checkMissing(scope6);
        return scope6;
      };
      r20 = dyn update_formula(p3, p4);
      return r20;
    };
    r22 = dyn add_scope(p2, p5);
    check L94() else D7();
  L96():
    scope7 = ld scope;
    check L98() else D8();
  L97():
    r24 = dyn base4(<sym scope>);
    goto L13(r24);
  D7():
    deopt 30 [r22];
  D8():
    deopt 36 [scope7];
  L14():
    goto L15();
  L15():
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L104() else L105();
  L94():
    st scope = r22;
    goto L12();
  L98():
    scope8 = force? scope7;
    checkMissing(scope8);
    length = ldf length in base;
    r26 = dyn length(scope8);
    check L99() else D9();
  L100():
    stop1 = ldf stop;
    check L101() else D10();
  D9():
    deopt 39 [r26];
  D10():
    deopt 42 [];
  L16(r31):
    st oTerms = r31;
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L112() else L113();
  L99():
    goto L13(r26);
  L101():
    r28 = dyn stop1("no terms in scope for adding to object");
    check L102() else D11();
  L104():
    object7 = ld object;
    check L106() else D12();
  L105():
    r30 = dyn base5(<lang `$`(object, terms)>, "term.labels");
    goto L16(r30);
  D11():
    deopt 44 [r28];
  D12():
    deopt 49 [object7];
  L17(r35):
    st int = r35;
    object15 = ld object;
    check L120() else D16();
  L102():
    goto L15();
  L106():
    object8 = force? object7;
    checkMissing(object8);
    c15 = `is.object`(object8);
    if c15 then L108() else L109(object8);
  L112():
    object11 = ld object;
    check L114() else D14();
  L113():
    r34 = dyn base6(<lang `$`(object, terms)>, "intercept");
    goto L17(r34);
  D14():
    deopt 58 [object11];
  D16():
    deopt 65 [object15];
  L107(dx1):
    attr = ldf attr in base;
    r33 = dyn attr(dx1, "term.labels");
    check L111() else D13();
  L108():
    dr = tryDispatchBuiltin.1("$", object8);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L110() else L109(dr);
  L109(object10):
    r32 = `$`(object10, <sym terms>);
    goto L107(r32);
  L114():
    object12 = force? object11;
    checkMissing(object12);
    c16 = `is.object`(object12);
    if c16 then L116() else L117(object12);
  L120():
    object16 = force? object15;
    checkMissing(object16);
    c17 = `is.object`(object16);
    if c17 then L122() else L123(object16);
  D13():
    deopt 54 [r33];
  L110():
    dx = getTryDispatchBuiltinValue(dr);
    goto L107(dx);
  L111():
    goto L16(r33);
  L115(dx3):
    attr1 = ldf attr in base;
    r37 = dyn attr1(dx3, "intercept");
    check L119() else D15();
  L116():
    dr2 = tryDispatchBuiltin.1("$", object12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L118() else L117(dr2);
  L117(object14):
    r36 = `$`(object14, <sym terms>);
    goto L115(r36);
  L121(dx5):
    object19 = ld object;
    check L125() else D17();
  L122():
    dr4 = tryDispatchBuiltin.1("$", object16);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L124() else L123(dr4);
  L123(object18):
    r38 = `$`(object18, <sym residuals>);
    goto L121(r38);
  D15():
    deopt 63 [r37];
  D17():
    deopt 67 [dx5, object19];
  L118():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L115(dx2);
  L119():
    goto L17(r37);
  L124():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L121(dx4);
  L125():
    object20 = force? object19;
    checkMissing(object20);
    c18 = `is.object`(object20);
    if c18 then L127() else L128(dx5, object20);
  L126(dx10, dx11):
    r40 = `+`(dx10, dx11);
    st y = r40;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L130() else L131();
  L127():
    dr6 = tryDispatchBuiltin.1("$", object20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L129() else L128(dx5, dr6);
  L128(dx7, object22):
    r39 = `$`(object22, <sym fitted.values>);
    goto L126(dx7, r39);
  L18(r42):
    st ns = r42;
    numeric = ldf numeric;
    check L134() else D20();
  L129():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L126(dx5, dx9);
  L130():
    scope9 = ld scope;
    check L132() else D18();
  L131():
    r41 = dyn base7(<sym scope>);
    goto L18(r41);
  D18():
    deopt 74 [scope9];
  D20():
    deopt 80 [];
  L132():
    scope10 = force? scope9;
    checkMissing(scope10);
    length1 = ldf length in base;
    r43 = dyn length1(scope10);
    check L133() else D19();
  L134():
    p6 = prom<V +>{
      ns = ld ns;
      ns1 = force? ns;
      checkMissing(ns1);
      r44 = `+`(ns1, 1);
      return r44;
    };
    r46 = dyn numeric(p6);
    check L135() else D21();
  D19():
    deopt 77 [r43];
  D21():
    deopt 82 [r46];
  L133():
    goto L18(r43);
  L135():
    st dfs = r46;
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L136() else L137();
  L19(r48):
    l = ld dfs;
    names__ = ldf `names<-`;
    check L140() else D24();
  L136():
    scope11 = ld scope;
    check L138() else D22();
  L137():
    r47 = dyn base8("<none>", <sym scope>);
    goto L19(r47);
  D22():
    deopt 87 [scope11];
  D24():
    deopt 92 [r48, l, r48];
  L138():
    scope12 = force? scope11;
    checkMissing(scope12);
    c19 = ldf c in base;
    r49 = dyn c19("<none>", scope12);
    check L139() else D23();
  L140():
    r50 = dyn names__(l, NULL, r48);
    check L141() else D25();
  D23():
    deopt 90 [r49];
  D25():
    deopt 94 [r48, r50];
  L139():
    goto L19(r49);
  L141():
    st dfs = r50;
    dfs = ld dfs;
    check L142() else D26();
  D26():
    deopt 96 [dfs];
  L142():
    dfs1 = force? dfs;
    checkMissing(dfs1);
    st RSS = dfs1;
    eval = ldf eval;
    check L143() else D27();
  D27():
    deopt 100 [];
  L143():
    p10 = prom<V +>{
      str2lang = ldf str2lang;
      p9 = prom<V +>{
        paste = ldf paste;
        p8 = prom<V +>{
          paste1 = ldf paste;
          p7 = prom<V +>{
            scope13 = ld scope;
            scope14 = force? scope13;
            checkMissing(scope14);
            return scope14;
          };
          r52 = dyn paste1[, collapse](p7, "+");
          return r52;
        };
        r54 = dyn paste("~ . +", p8);
        return r54;
      };
      r56 = dyn str2lang(p9);
      return r56;
    };
    r58 = dyn eval(p10);
    check L144() else D28();
  D28():
    deopt 102 [r58];
  L144():
    st `add.rhs` = r58;
    update_formula1 = ldf `update.formula`;
    check L145() else D29();
  D29():
    deopt 105 [];
  L145():
    p11 = prom<V +>{
      object23 = ld object;
      object24 = force? object23;
      checkMissing(object24);
      return object24;
    };
    p12 = prom<V +>{
      add_rhs = ld `add.rhs`;
      add_rhs1 = force? add_rhs;
      checkMissing(add_rhs1);
      return add_rhs1;
    };
    r61 = dyn update_formula1(p11, p12);
    check L146() else D30();
  D30():
    deopt 108 [r61];
  L146():
    st `new.form` = r61;
    terms = ldf terms;
    check L147() else D31();
  D31():
    deopt 111 [];
  L147():
    p13 = prom<V +>{
      new_form = ld `new.form`;
      new_form1 = force? new_form;
      checkMissing(new_form1);
      return new_form1;
    };
    r63 = dyn terms(p13);
    check L148() else D32();
  D32():
    deopt 113 [r63];
  L148():
    st Terms = r63;
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L149() else L150();
  L20(r65):
    c21 = `as.logical`(r65);
    if c21 then L152() else L21();
  L149():
    x1 = ld x;
    check L151() else D33();
  L150():
    r64 = dyn base9(<sym x>);
    goto L20(r64);
  D33():
    deopt 116 [x1];
  L21():
    object39 = ld object;
    check L199() else D61();
  L28():
    nrow = ldf nrow;
    check L209() else D63();
  L151():
    x2 = force? x1;
    checkMissing(x2);
    c20 = `==`(x2, NULL);
    goto L20(c20);
  L152():
    object25 = ld object;
    check L153() else D34();
  D34():
    deopt 119 [object25];
  D61():
    deopt 207 [object39];
  D63():
    deopt 216 [];
  L153():
    object26 = force? object25;
    checkMissing(object26);
    c22 = `is.object`(object26);
    if c22 then L155() else L156(object26);
  L199():
    object40 = force? object39;
    checkMissing(object40);
    c27 = `is.object`(object40);
    if c27 then L201() else L202(object40);
  L209():
    p27 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r110 = dyn nrow(p27);
    check L210() else D64();
  D64():
    deopt 218 [r110];
  L154(dx13):
    st fc = dx13;
    Terms = ld Terms;
    check L158() else D35();
  L155():
    dr8 = tryDispatchBuiltin.1("$", object26);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L157() else L156(dr8);
  L156(object28):
    r66 = `$`(object28, <sym call>);
    goto L154(r66);
  L200(dx21):
    st wt = dx21;
    object43 = ld object;
    check L204() else D62();
  L201():
    dr16 = tryDispatchBuiltin.1("$", object40);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L203() else L202(dr16);
  L202(object42):
    r107 = `$`(object42, <sym weights>);
    goto L200(r107);
  L210():
    st n = r110;
    sym14 = ldf attr;
    base14 = ldf attr in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L211() else L212();
  D35():
    deopt 123 [Terms];
  D62():
    deopt 211 [object43];
  L29(r112):
    st Terms = r112;
    sym15 = ldf attr;
    base15 = ldf attr in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L215() else L216();
  L157():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L154(dx12);
  L158():
    Terms1 = force? Terms;
    checkMissing(Terms1);
    l1 = ld fc;
    c23 = `is.object`(l1);
    if c23 then L160() else L161(Terms1, l1);
  L203():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L200(dx20);
  L204():
    object44 = force? object43;
    checkMissing(object44);
    c28 = `is.object`(object44);
    if c28 then L206() else L207(object44);
  L211():
    Terms10 = ld Terms;
    check L213() else D65();
  L212():
    r111 = dyn base14(<sym Terms>, "term.labels");
    goto L29(r111);
  D65():
    deopt 222 [Terms10];
  L30(r115):
    st asgn = r115;
    sym16 = ldf match;
    base16 = ldf match in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L219() else L220();
  L159(dx15):
    st fc = dx15;
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L163() else L164();
  L160():
    dr10 = tryDispatchBuiltin.0("$<-", l1, Terms1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L162() else L161(Terms1, dr10);
  L161(Terms3, l3):
    r67 = `$<-`(l3, <sym formula>, Terms1);
    goto L159(r67);
  L205(dx23):
    st offset = dx23;
    goto L28();
  L206():
    dr18 = tryDispatchBuiltin.1("$", object44);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L208() else L207(dr18);
  L207(object46):
    r108 = `$`(object46, <sym offset>);
    goto L205(r108);
  L213():
    Terms11 = force? Terms10;
    checkMissing(Terms11);
    attr2 = ldf attr in base;
    r113 = dyn attr2(Terms11, "term.labels");
    check L214() else D66();
  L215():
    x5 = ld x;
    check L217() else D67();
  L216():
    r114 = dyn base15(<sym x>, "assign");
    goto L30(r114);
  D66():
    deopt 226 [r113];
  D67():
    deopt 230 [x5];
  L22(r69):
    st fob = r69;
    sym11 = ldf oldClass;
    base11 = ldf oldClass in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L168() else L169();
  L31(r118):
    r123 = `>`(r118, 0);
    st ousex = r123;
    int = ld int;
    check L228() else D74();
  L162():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L159(dx14);
  L163():
    fc = ld fc;
    check L165() else D36();
  L164():
    r68 = dyn base10[call, terms](<sym fc>, <sym Terms>);
    goto L22(r68);
  L208():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L205(dx22);
  L214():
    goto L29(r113);
  L217():
    x6 = force? x5;
    checkMissing(x6);
    attr3 = ldf attr in base;
    r116 = dyn attr3(x6, "assign");
    check L218() else D68();
  L219():
    asgn = ld asgn;
    check L221() else D69();
  L220():
    r117 = dyn base16(<sym asgn>, <lang match(oTerms, Terms)>, 0);
    goto L31(r117);
  D36():
    deopt 130 [fc];
  D68():
    deopt 234 [r116];
  D69():
    deopt 238 [asgn];
  D74():
    deopt 257 [int];
  L23(r72):
    l4 = ld fob;
    class__ = ldf `class<-`;
    check L172() else D41();
  L165():
    fc1 = force? fc;
    checkMissing(fc1);
    Terms6 = ld Terms;
    check L166() else D37();
  L168():
    object29 = ld object;
    check L170() else D39();
  L169():
    r71 = dyn base11(<sym object>);
    goto L23(r71);
  L218():
    goto L30(r116);
  L221():
    asgn1 = force? asgn;
    checkMissing(asgn1);
    sym17 = ldf match;
    base17 = ldf match in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L222() else L223();
  L228():
    int1 = force? int;
    checkMissing(int1);
    c29 = `as.logical`(int1);
    if c29 then L229() else L33();
  D37():
    deopt 133 [Terms6];
  D39():
    deopt 141 [object29];
  D41():
    deopt 146 [r72, l4, r72];
  L32(r120):
    match1 = ldf match in base;
    r122 = dyn match1(asgn1, r120, 0, NULL);
    check L227() else D73();
  L33():
    goto L35();
  L35():
    sym18 = ldf `is.null`;
    base18 = ldf `is.null` in base;
    guard18 = `==`.4(sym18, base18);
    if guard18 then L234() else L235();
  L166():
    Terms7 = force? Terms6;
    checkMissing(Terms7);
    list = ldf list in base;
    r70 = dyn list(fc1, Terms7);
    check L167() else D38();
  L170():
    object30 = force? object29;
    checkMissing(object30);
    oldClass = ldf oldClass in base;
    r73 = dyn oldClass(object30);
    check L171() else D40();
  L172():
    r74 = dyn class__(l4, NULL, r72);
    check L173() else D42();
  L222():
    oTerms = ld oTerms;
    check L224() else D70();
  L223():
    r119 = dyn base17(<sym oTerms>, <sym Terms>);
    goto L32(r119);
  L229():
    l5 = ld ousex;
    c30 = `is.object`(l5);
    if c30 then L230() else L231(TRUE, l5);
  D38():
    deopt 137 [r70];
  D40():
    deopt 144 [r73];
  D42():
    deopt 148 [r72, r74];
  D70():
    deopt 242 [oTerms];
  D73():
    deopt 253 [r122];
  L34(r127, dx25):
    st ousex = dx25;
    goto L35();
  L36(r131):
    r132 = `!`(r131);
    st iswt = r132;
    x7 = ld x;
    check L237() else D76();
  L167():
    goto L22(r70);
  L171():
    goto L23(r73);
  L173():
    st fob = r74;
    model_frame = ldf `model.frame`;
    check L174() else D43();
  L224():
    oTerms1 = force? oTerms;
    checkMissing(oTerms1);
    Terms12 = ld Terms;
    check L225() else D71();
  L227():
    goto L31(r122);
  L230():
    dr20 = tryDispatchBuiltin.0("[<-", l5, TRUE);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L232() else L231(TRUE, dr20);
  L231(r125, l7):
    ___ = ldf `[<-` in base;
    r128 = dyn ___(l7, TRUE, 1);
    goto L34(r125, r128);
  L234():
    wt = ld wt;
    check L236() else D75();
  L235():
    r130 = dyn base18(<sym wt>);
    goto L36(r130);
  D43():
    deopt 151 [];
  D71():
    deopt 244 [Terms12];
  D75():
    deopt 269 [wt];
  D76():
    deopt 274 [x7];
  L174():
    p14 = prom<V +>{
      fob = ld fob;
      fob1 = force? fob;
      checkMissing(fob1);
      return fob1;
    };
    p15 = prom<V +>{
      object31 = ld object;
      object32 = force? object31;
      checkMissing(object32);
      c24 = `is.object`(object32);
      if c24 then L1() else L2(object32);
    L0(dx17):
      return dx17;
    L1():
      dr12 = tryDispatchBuiltin.1("$", object32);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(object34):
      r76 = `$`(object34, <sym xlevels>);
      goto L0(r76);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    };
    r78 = dyn model_frame[, xlev](p14, p15);
    check L175() else D44();
  L225():
    Terms13 = force? Terms12;
    checkMissing(Terms13);
    match = ldf match in base;
    r121 = dyn match(oTerms1, Terms13, NA_INT, NULL);
    check L226() else D72();
  L232():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L34(TRUE, dx24);
  L236():
    wt1 = force? wt;
    checkMissing(wt1);
    c31 = `==`(wt1, NULL);
    goto L36(c31);
  L237():
    x8 = force? x7;
    checkMissing(x8);
    c32 = `is.object`(x8);
    if c32 then L238() else L239(x8);
  D44():
    deopt 155 [r78];
  D72():
    deopt 249 [r121];
  L37(dx27):
    st X = dx27;
    iswt = ld iswt;
    check L242() else D78();
  L175():
    st m = r78;
    model_matrix = ldf `model.matrix`;
    check L176() else D45();
  L226():
    goto L32(r121);
  L238():
    dr22 = tryDispatchBuiltin.1("[", x8);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L240() else L239(dr22);
  L239(x10):
    ousex = ld ousex;
    check L241() else D77();
  D45():
    deopt 158 [];
  D77():
    deopt 277 [x10, ousex];
  D78():
    deopt 284 [iswt];
  L176():
    p16 = prom<V +>{
      Terms8 = ld Terms;
      Terms9 = force? Terms8;
      checkMissing(Terms9);
      return Terms9;
    };
    p17 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p18 = prom<V +>{
      object35 = ld object;
      object36 = force? object35;
      checkMissing(object36);
      c25 = `is.object`(object36);
      if c25 then L1() else L2(object36);
    L0(dx19):
      return dx19;
    L1():
      dr14 = tryDispatchBuiltin.1("$", object36);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(object38):
      r81 = `$`(object38, <sym contrasts>);
      goto L0(r81);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    r83 = dyn model_matrix[, , `contrasts.arg`](p16, p17, p18);
    check L177() else D46();
  L240():
    dx26 = getTryDispatchBuiltinValue(dr22);
    goto L37(dx26);
  L241():
    ousex1 = force? ousex;
    __ = ldf `[` in base;
    r133 = dyn __(x8, <missing>, ousex1, FALSE);
    goto L37(r133);
  L242():
    iswt1 = force? iswt;
    checkMissing(iswt1);
    c33 = `as.logical`(iswt1);
    if c33 then L243() else L38();
  D46():
    deopt 163 [r83];
  L38():
    lm_fit = ldf `lm.fit`;
    check L247() else D81();
  L39(r139):
    st z = r139;
    z = ld z;
    check L249() else D83();
  L177():
    st x = r83;
    model_offset = ldf `model.offset`;
    check L178() else D47();
  L243():
    lm_wfit = ldf `lm.wfit`;
    check L244() else D79();
  D47():
    deopt 166 [];
  D79():
    deopt 287 [];
  D81():
    deopt 295 [];
  D83():
    deopt 302 [z];
  L178():
    p19 = prom<V +>{
      m2 = ld m;
      m3 = force? m2;
      checkMissing(m3);
      return m3;
    };
    r85 = dyn model_offset(p19);
    check L179() else D48();
  L244():
    p28 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    p29 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      return y5;
    };
    p30 = prom<V +>{
      wt2 = ld wt;
      wt3 = force? wt2;
      checkMissing(wt3);
      return wt3;
    };
    p31 = prom<V +>{
      offset = ld offset;
      offset1 = force? offset;
      checkMissing(offset1);
      return offset1;
    };
    r138 = dyn lm_wfit[, , , offset](p28, p29, p30, p31);
    check L245() else D80();
  L247():
    p32 = prom<V +>{
      X2 = ld X;
      X3 = force? X2;
      checkMissing(X3);
      return X3;
    };
    p33 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      return y7;
    };
    p34 = prom<V +>{
      offset2 = ld offset;
      offset3 = force? offset2;
      checkMissing(offset3);
      return offset3;
    };
    r143 = dyn lm_fit[, , offset](p32, p33, p34);
    check L248() else D82();
  L249():
    z1 = force? z;
    checkMissing(z1);
    c34 = `is.object`(z1);
    if c34 then L251() else L252(z1);
  D48():
    deopt 168 [r85];
  D80():
    deopt 293 [r138];
  D82():
    deopt 300 [r143];
  L179():
    st offset = r85;
    model_weights = ldf `model.weights`;
    check L180() else D49();
  L245():
    goto L39(r138);
  L248():
    goto L39(r143);
  L250(dx29):
    l8 = ld dfs;
    c35 = `is.object`(l8);
    if c35 then L254() else L255(dx29, l8);
  L251():
    dr24 = tryDispatchBuiltin.1("$", z1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L253() else L252(dr24);
  L252(z3):
    r144 = `$`(z3, <sym rank>);
    goto L250(r144);
  D49():
    deopt 171 [];
  L40(dx35):
    st dfs = dx35;
    l11 = ld z;
    class__1 = ldf `class<-`;
    check L257() else D84();
  L180():
    p20 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    r87 = dyn model_weights(p20);
    check L181() else D50();
  L253():
    dx28 = getTryDispatchBuiltinValue(dr24);
    goto L250(dx28);
  L254():
    dr26 = tryDispatchBuiltin.0("[<-", l8, dx29);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L256() else L255(dx29, dr26);
  L255(dx31, l10):
    ___1 = ldf `[<-` in base;
    r145 = dyn ___1(l10, dx29, 1);
    goto L40(r145);
  D50():
    deopt 173 [r87];
  D84():
    deopt 313 ["lm", l11, "lm"];
  L181():
    st wt = r87;
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L182() else L183();
  L256():
    dx33 = getTryDispatchBuiltinValue(dr26);
    goto L40(dx33);
  L257():
    r146 = dyn class__1(l11, NULL, "lm");
    check L258() else D85();
  D85():
    deopt 315 ["lm", r146];
  L24(r89):
    st oldn = r89;
    model_response = ldf `model.response`;
    check L186() else D53();
  L182():
    y = ld y;
    check L184() else D51();
  L183():
    r88 = dyn base12(<sym y>);
    goto L24(r88);
  L258():
    st z = r146;
    deviance = ldf deviance;
    check L259() else D86();
  D51():
    deopt 177 [y];
  D53():
    deopt 183 [];
  D86():
    deopt 318 [];
  L184():
    y1 = force? y;
    checkMissing(y1);
    length2 = ldf length in base;
    r90 = dyn length2(y1);
    check L185() else D52();
  L186():
    p21 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r92 = dyn model_response(p21, "numeric");
    check L187() else D54();
  L259():
    p35 = prom<V +>{
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      return z5;
    };
    r148 = dyn deviance(p35);
    check L260() else D87();
  D52():
    deopt 180 [r90];
  D54():
    deopt 186 [r92];
  D87():
    deopt 320 [r148];
  L185():
    goto L24(r90);
  L187():
    st y = r92;
    sym13 = ldf length;
    base13 = ldf length in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L188() else L189();
  L260():
    l12 = ld RSS;
    c36 = `is.object`(l12);
    if c36 then L261() else L262(r148, l12);
  L25(r94):
    st newn = r94;
    newn = ld newn;
    check L192() else D57();
  L41(dx37):
    st RSS = dx37;
    sapply = ldf sapply;
    check L264() else D88();
  L188():
    y2 = ld y;
    check L190() else D55();
  L189():
    r93 = dyn base13(<sym y>);
    goto L25(r93);
  L261():
    dr28 = tryDispatchBuiltin.0("[<-", l12, r148);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L263() else L262(r148, dr28);
  L262(r150, l14):
    ___2 = ldf `[<-` in base;
    r153 = dyn ___2(l14, r148, 1);
    goto L41(r153);
  D55():
    deopt 190 [y2];
  D57():
    deopt 195 [newn];
  D88():
    deopt 327 [];
  L190():
    y3 = force? y2;
    checkMissing(y3);
    length3 = ldf length in base;
    r95 = dyn length3(y3);
    check L191() else D56();
  L192():
    newn1 = force? newn;
    checkMissing(newn1);
    oldn = ld oldn;
    check L193() else D58();
  L263():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L41(dx36);
  L264():
    p37 = prom<V +>{
      strsplit = ldf strsplit;
      p36 = prom<V +>{
        Terms14 = ld Terms;
        Terms15 = force? Terms14;
        checkMissing(Terms15);
        return Terms15;
      };
      r155 = dyn strsplit[, , fixed](p36, ":", TRUE);
      return r155;
    };
    p38 = prom<V +>{
      r157 = clos inner2501545716;
      return r157;
    };
    r159 = dyn sapply(p37, p38);
    check L265() else D89();
  D56():
    deopt 193 [r95];
  D58():
    deopt 196 [newn1, oldn];
  D89():
    deopt 330 [r159];
  L191():
    goto L25(r95);
  L193():
    oldn1 = force? oldn;
    checkMissing(oldn1);
    r96 = `<`(newn1, oldn1);
    c26 = `as.logical`(r96);
    if c26 then L194() else L26();
  L265():
    st sTerms = r159;
    scope15 = ld scope;
    check L266() else D90();
  D90():
    deopt 332 [scope15];
  L26():
    goto L27(NULL);
  L27(r105):
    goto L28();
  L194():
    warning = ldf warning;
    check L195() else D59();
  L266():
    scope16 = force? scope15;
    checkMissing(scope16);
    s = toForSeq(scope16);
    l15 = length(s);
    i = 0;
    goto L42(i);
  D59():
    deopt 200 [];
  L42(i1):
    i2 = `+`.1(i1, 1);
    c37 = `<`.1(l15, i2);
    if c37 then L267() else L50();
  L195():
    p26 = prom<V +>{
      sprintf = ldf sprintf;
      p23 = prom<V +>{
        ngettext = ldf ngettext;
        p22 = prom<V +>{
          newn2 = ld newn;
          newn3 = force? newn2;
          checkMissing(newn3);
          return newn3;
        };
        r98 = dyn ngettext(p22, "using the %d/%d row from a combined fit", "using the %d/%d rows from a combined fit");
        return r98;
      };
      p24 = prom<V +>{
        newn4 = ld newn;
        newn5 = force? newn4;
        checkMissing(newn5);
        return newn5;
      };
      p25 = prom<V +>{
        oldn2 = ld oldn;
        oldn3 = force? oldn2;
        checkMissing(oldn3);
        return oldn3;
      };
      r102 = dyn sprintf(p23, p24, p25);
      return r102;
    };
    r104 = dyn warning[, domain](p26, NA_LGL);
    check L196() else D60();
  D60():
    deopt 204 [r104];
  L50():
    x11 = `[[`(s, i2, NULL, TRUE);
    st tt = x11;
    paste2 = ldf paste;
    check L268() else D91();
  L196():
    goto L27(r104);
  L267():
    scale1 = ld scale;
    check L309() else D113();
  D91():
    deopt 335 [i2];
  D113():
    deopt 419 [scale1];
  L268():
    p41 = prom<V +>{
      sort = ldf sort;
      p40 = prom<V +>{
        strsplit1 = ldf strsplit;
        p39 = prom<V +>{
          tt = ld tt;
          tt1 = force? tt;
          checkMissing(tt1);
          return tt1;
        };
        r161 = dyn strsplit1(p39, ":");
        c38 = `is.object`(r161);
        if c38 then L1() else L2(r161);
      L0(dx39):
        return dx39;
      L1():
        dr30 = tryDispatchBuiltin.1("[[", r161);
        dc15 = getTryDispatchBuiltinDispatched(dr30);
        if dc15 then L3() else L2(dr30);
      L2(r163):
        __1 = ldf `[[` in base;
        r164 = dyn __1(r163, 1);
        goto L0(r164);
      L3():
        dx38 = getTryDispatchBuiltinValue(dr30);
        goto L0(dx38);
      };
      r166 = dyn sort(p40);
      return r166;
    };
    r168 = dyn paste2[, collapse](p41, ":");
    check L269() else D92();
  L309():
    scale2 = force? scale1;
    checkMissing(scale2);
    r198 = `>`(scale2, 0.0);
    c44 = `as.logical`(r198);
    if c44 then L310() else L51();
  D92():
    deopt 339 [i2, r168];
  L51():
    n2 = ld n;
    check L317() else D119();
  L52():
    dfs6 = ld dfs;
    check L324() else D124();
  L269():
    st stt = r168;
    sym19 = ldf match;
    base19 = ldf match in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L270() else L271();
  L310():
    RSS = ld RSS;
    check L311() else D114();
  D114():
    deopt 423 [RSS];
  D119():
    deopt 434 [n2];
  D124():
    deopt 447 [dfs6];
  L43(i7, r170):
    r175 = `>`(r170, 0);
    st usex = r175;
    x12 = ld x;
    check L279() else D98();
  L270():
    asgn2 = ld asgn;
    check L272() else D93();
  L271():
    r169 = dyn base19(<sym asgn>, <lang match(stt, sTerms)>, 0);
    goto L43(i2, r169);
  L311():
    RSS1 = force? RSS;
    checkMissing(RSS1);
    scale3 = ld scale;
    check L312() else D115();
  L317():
    n3 = force? n2;
    checkMissing(n3);
    sym21 = ldf log;
    base21 = ldf log in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L318() else L319();
  L324():
    dfs7 = force? dfs6;
    checkMissing(dfs7);
    dfs8 = ld dfs;
    check L325() else D125();
  D93():
    deopt 343 [i2, asgn2];
  D98():
    deopt 362 [i7, x12];
  D115():
    deopt 424 [RSS1, scale3];
  D125():
    deopt 448 [dfs7, dfs8];
  L53(n6, r205):
    r208 = `*`(n6, r205);
    k3 = ld k;
    check L322() else D122();
  L272():
    asgn3 = force? asgn2;
    checkMissing(asgn3);
    sym20 = ldf match;
    base20 = ldf match in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L273() else L274();
  L279():
    x13 = force? x12;
    checkMissing(x13);
    c39 = `is.object`(x13);
    if c39 then L280() else L281(i7, x13);
  L312():
    scale4 = force? scale3;
    checkMissing(scale4);
    r199 = `/`(RSS1, scale4);
    n = ld n;
    check L313() else D116();
  L318():
    RSS2 = ld RSS;
    check L320() else D120();
  L319():
    r204 = dyn base21(<lang `/`(RSS, n)>);
    goto L53(n3, r204);
  L325():
    dfs9 = force? dfs8;
    checkMissing(dfs9);
    c45 = `is.object`(dfs9);
    if c45 then L326() else L327(dfs7, dfs9);
  D116():
    deopt 426 [r199, n];
  D120():
    deopt 436 [n3, RSS2];
  D122():
    deopt 441 [r208, k3];
  L44(i10, r172):
    match3 = ldf match in base;
    r174 = dyn match3(asgn3, r172, 0, NULL);
    check L278() else D97();
  L45(i14, dx41):
    st X = dx41;
    iswt2 = ld iswt;
    check L285() else D101();
  L54(dfs15, dx53):
    r212 = `-`(dfs15, dx53);
    st dfs = r212;
    l23 = ld dfs;
    c46 = `is.object`(l23);
    if c46 then L329() else L330(NA_LGL, l23);
  L273():
    stt = ld stt;
    check L275() else D94();
  L274():
    r171 = dyn base20(<sym stt>, <sym sTerms>);
    goto L44(i2, r171);
  L280():
    dr32 = tryDispatchBuiltin.1("[", x13);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L282() else L281(i7, dr32);
  L281(i12, x15):
    usex = ld usex;
    check L283() else D99();
  L313():
    n1 = force? n;
    checkMissing(n1);
    r200 = `-`(r199, n1);
    k1 = ld k;
    check L314() else D117();
  L320():
    RSS3 = force? RSS2;
    checkMissing(RSS3);
    n7 = ld n;
    check L321() else D121();
  L322():
    k4 = force? k3;
    checkMissing(k4);
    dfs4 = ld dfs;
    check L323() else D123();
  L326():
    dr40 = tryDispatchBuiltin.1("[", dfs9);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L328() else L327(dfs7, dr40);
  L327(dfs12, dfs13):
    __3 = ldf `[` in base;
    r211 = dyn __3(dfs13, 1);
    goto L54(dfs12, r211);
  D94():
    deopt 347 [i2, stt];
  D97():
    deopt 358 [i10, r174];
  D99():
    deopt 365 [i12, x15, usex];
  D101():
    deopt 374 [i14, iswt2];
  D117():
    deopt 428 [r200, k1];
  D121():
    deopt 437 [n3, RSS3, n7];
  D123():
    deopt 442 [r208, k4, dfs4];
  L55(dx55):
    st dfs = dx55;
    data_frame = ldf `data.frame`;
    check L332() else D126();
  L275():
    stt1 = force? stt;
    checkMissing(stt1);
    sTerms = ld sTerms;
    check L276() else D95();
  L278():
    goto L43(i10, r174);
  L282():
    dx40 = getTryDispatchBuiltinValue(dr32);
    goto L45(i7, dx40);
  L283():
    usex1 = force? usex;
    checkMissing(usex1);
    ousex2 = ld ousex;
    check L284() else D100();
  L285():
    iswt3 = force? iswt2;
    checkMissing(iswt3);
    c40 = `as.logical`(iswt3);
    if c40 then L286() else L46();
  L314():
    k2 = force? k1;
    checkMissing(k2);
    dfs2 = ld dfs;
    check L315() else D118();
  L321():
    n8 = force? n7;
    checkMissing(n8);
    r206 = `/`(RSS3, n8);
    r207 = log(r206, 2.718281828459045);
    goto L53(n3, r207);
  L323():
    dfs5 = force? dfs4;
    checkMissing(dfs5);
    r209 = `*`(k4, dfs5);
    r210 = `+`(r208, r209);
    st aic = r210;
    goto L52();
  L328():
    dx52 = getTryDispatchBuiltinValue(dr40);
    goto L54(dfs7, dx52);
  L329():
    dr42 = tryDispatchBuiltin.0("[<-", l23, NA_LGL);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L331() else L330(NA_LGL, dr42);
  L330(r214, l25):
    ___5 = ldf `[<-` in base;
    r217 = dyn ___5(l25, NA_LGL, 1);
    goto L55(r217);
  D95():
    deopt 349 [i2, sTerms];
  D100():
    deopt 366 [i12, x15, usex1, ousex2];
  D118():
    deopt 429 [r200, k2, dfs2];
  D126():
    deopt 463 [];
  L46():
    lm_fit1 = ldf `lm.fit`;
    check L290() else D104();
  L47(i17, r183):
    st z = r183;
    l16 = ld z;
    class__2 = ldf `class<-`;
    check L292() else D106();
  L276():
    sTerms1 = force? sTerms;
    checkMissing(sTerms1);
    match2 = ldf match in base;
    r173 = dyn match2(stt1, sTerms1, NA_INT, NULL);
    check L277() else D96();
  L284():
    ousex3 = force? ousex2;
    checkMissing(ousex3);
    r176 = `||`(usex1, ousex3);
    __2 = ldf `[` in base;
    r177 = dyn __2(x13, <missing>, r176, FALSE);
    goto L45(i12, r177);
  L286():
    lm_wfit1 = ldf `lm.wfit`;
    check L287() else D102();
  L315():
    dfs3 = force? dfs2;
    checkMissing(dfs3);
    r201 = `*`(k2, dfs3);
    r202 = `+`(r200, r201);
    st aic = r202;
    goto L52();
  L331():
    dx54 = getTryDispatchBuiltinValue(dr42);
    goto L55(dx54);
  L332():
    p50 = prom<V +>{
      dfs16 = ld dfs;
      dfs17 = force? dfs16;
      checkMissing(dfs17);
      return dfs17;
    };
    p51 = prom<V +>{
      sym22 = ldf c;
      base22 = ldf c in base;
      guard22 = `==`.4(sym22, base22);
      if guard22 then L3() else L4();
    L0(r220):
      return r220;
    L3():
      RSS4 = ld RSS;
      RSS5 = force? RSS4;
      checkMissing(RSS5);
      c47 = `is.object`(RSS5);
      if c47 then L5() else L6(RSS5);
    L4():
      r219 = dyn base22(NA_LGL, <lang `-`(`[`(RSS, 1), `[`(RSS, `-`(1)))>);
      goto L0(r219);
    L1(dx57):
      RSS8 = ld RSS;
      RSS9 = force? RSS8;
      checkMissing(RSS9);
      c48 = `is.object`(RSS9);
      if c48 then L8() else L9(dx57, RSS9);
    L5():
      dr44 = tryDispatchBuiltin.1("[", RSS5);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L7() else L6(dr44);
    L6(RSS7):
      __4 = ldf `[` in base;
      r221 = dyn __4(RSS7, 1);
      goto L1(r221);
    L2(dx62, dx63):
      r223 = `-`(dx62, dx63);
      c49 = ldf c in base;
      r224 = dyn c49(NA_LGL, r223);
      goto L0(r224);
    L7():
      dx56 = getTryDispatchBuiltinValue(dr44);
      goto L1(dx56);
    L8():
      dr46 = tryDispatchBuiltin.1("[", RSS9);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L10() else L9(dx57, dr46);
    L9(dx59, RSS11):
      __5 = ldf `[` in base;
      r222 = dyn __5(RSS11, -1);
      goto L2(dx59, r222);
    L10():
      dx61 = getTryDispatchBuiltinValue(dr46);
      goto L2(dx57, dx61);
    };
    p52 = prom<V +>{
      RSS12 = ld RSS;
      RSS13 = force? RSS12;
      checkMissing(RSS13);
      return RSS13;
    };
    p53 = prom<V +>{
      aic = ld aic;
      aic1 = force? aic;
      checkMissing(aic1);
      return aic1;
    };
    p54 = prom<V +>{
      sym23 = ldf names;
      base23 = ldf names in base;
      guard23 = `==`.4(sym23, base23);
      if guard23 then L1() else L2();
    L0(r229):
      return r229;
    L1():
      dfs18 = ld dfs;
      dfs19 = force? dfs18;
      checkMissing(dfs19);
      names = ldf names in base;
      r230 = dyn names(dfs19);
      goto L0(r230);
    L2():
      r228 = dyn base23(<sym dfs>);
      goto L0(r228);
    };
    r232 = dyn data_frame[Df, `Sum of Sq`, RSS, AIC, `row.names`, `check.names`](p50, p51, p52, p53, p54, FALSE);
    check L333() else D127();
  D96():
    deopt 354 [i2, r173];
  D102():
    deopt 377 [i14];
  D104():
    deopt 385 [i14];
  D106():
    deopt 395 [i17, "lm", l16, "lm"];
  D127():
    deopt 476 [r232];
  L277():
    goto L44(i2, r173);
  L287():
    p42 = prom<V +>{
      X4 = ld X;
      X5 = force? X4;
      checkMissing(X5);
      return X5;
    };
    p43 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      return y9;
    };
    p44 = prom<V +>{
      wt4 = ld wt;
      wt5 = force? wt4;
      checkMissing(wt5);
      return wt5;
    };
    p45 = prom<V +>{
      offset4 = ld offset;
      offset5 = force? offset4;
      checkMissing(offset5);
      return offset5;
    };
    r182 = dyn lm_wfit1[, , , offset](p42, p43, p44, p45);
    check L288() else D103();
  L290():
    p46 = prom<V +>{
      X6 = ld X;
      X7 = force? X6;
      checkMissing(X7);
      return X7;
    };
    p47 = prom<V +>{
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      return y11;
    };
    p48 = prom<V +>{
      offset6 = ld offset;
      offset7 = force? offset6;
      checkMissing(offset7);
      return offset7;
    };
    r187 = dyn lm_fit1[, , offset](p46, p47, p48);
    check L291() else D105();
  L292():
    r188 = dyn class__2(l16, NULL, "lm");
    check L293() else D107();
  L333():
    st aod = r232;
    scale5 = ld scale;
    check L334() else D128();
  D103():
    deopt 383 [i14, r182];
  D105():
    deopt 390 [i14, r187];
  D107():
    deopt 397 [i17, "lm", r188];
  D128():
    deopt 478 [scale5];
  L288():
    goto L47(i14, r182);
  L291():
    goto L47(i14, r187);
  L293():
    st z = r188;
    z6 = ld z;
    check L294() else D108();
  L334():
    scale6 = force? scale5;
    checkMissing(scale6);
    r233 = `>`(scale6, 0.0);
    c50 = `as.logical`(r233);
    if c50 then L335() else L56();
  D108():
    deopt 399 [i17, z6];
  L56():
    goto L58();
  L58():
    match_arg = ldf `match.arg`;
    check L342() else D132();
  L294():
    z7 = force? z6;
    checkMissing(z7);
    c41 = `is.object`(z7);
    if c41 then L296() else L297(i17, z7);
  L335():
    sym24 = ldf c;
    base24 = ldf c in base;
    guard24 = `==`.4(sym24, base24);
    if guard24 then L336() else L337();
  D132():
    deopt 498 [];
  L57(r235):
    l26 = ld aod;
    names__1 = ldf `names<-`;
    check L339() else D130();
  L295(i21, dx43):
    l17 = ld dfs;
    c42 = `is.object`(l17);
    if c42 then L299() else L300(i21, dx43, l17);
  L296():
    dr34 = tryDispatchBuiltin.1("$", z7);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L298() else L297(i17, dr34);
  L297(i19, z9):
    r189 = `$`(z9, <sym rank>);
    goto L295(i19, r189);
  L336():
    c51 = ldf c in base;
    r236 = dyn c51("Df", "Sum of Sq", "RSS", "Cp");
    check L338() else D129();
  L337():
    r234 = dyn base24("Df", "Sum of Sq", "RSS", "Cp");
    goto L57(r234);
  L342():
    p55 = prom<V +>{
      test1 = ld test;
      test2 = force? test1;
      checkMissing(test2);
      return test2;
    };
    r240 = dyn match_arg(p55);
    check L343() else D133();
  D129():
    deopt 489 [r236];
  D130():
    deopt 491 [r235, l26, r235];
  D133():
    deopt 500 [r240];
  L48(i25, dx49):
    st dfs = dx49;
    deviance1 = ldf deviance;
    check L303() else D110();
  L298():
    dx42 = getTryDispatchBuiltinValue(dr34);
    goto L295(i17, dx42);
  L299():
    dr36 = tryDispatchBuiltin.0("[<-", l17, dx43);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L301() else L300(i21, dx43, dr36);
  L300(i23, dx45, l19):
    tt2 = ld tt;
    check L302() else D109();
  L338():
    goto L57(r236);
  L339():
    r237 = dyn names__1(l26, NULL, r235);
    check L340() else D131();
  L343():
    st test = r240;
    test3 = ld test;
    check L344() else D134();
  D109():
    deopt 403 [i23, dx45, l19, dx43, tt2];
  D110():
    deopt 408 [i25];
  D131():
    deopt 493 [r235, r237];
  D134():
    deopt 502 [test3];
  L301():
    dx47 = getTryDispatchBuiltinValue(dr36);
    goto L48(i21, dx47);
  L302():
    tt3 = force? tt2;
    ___3 = ldf `[<-` in base;
    r190 = dyn ___3(l19, dx43, tt3);
    goto L48(i23, r190);
  L303():
    p49 = prom<V +>{
      z10 = ld z;
      z11 = force? z10;
      checkMissing(z11);
      return z11;
    };
    r192 = dyn deviance1(p49);
    check L304() else D111();
  L340():
    st aod = r237;
    goto L58();
  L344():
    test4 = force? test3;
    checkMissing(test4);
    r241 = `==`(test4, "Chisq");
    c52 = `as.logical`(r241);
    if c52 then L345() else L59();
  D111():
    deopt 410 [i25, r192];
  L59():
    test5 = ld test;
    check L389() else D151();
  L68():
    sym28 = ldf c;
    base28 = ldf c in base;
    guard28 = `==`.4(sym28, base28);
    if guard28 then L405() else L406();
  L304():
    l20 = ld RSS;
    c43 = `is.object`(l20);
    if c43 then L305() else L306(i25, r192, l20);
  L345():
    aod = ld aod;
    check L346() else D135();
  D135():
    deopt 506 [aod];
  D151():
    deopt 575 [test5];
  L49(i29, dx51):
    st RSS = dx51;
    goto L42(i29);
  L72(r297):
    st head = r297;
    sym29 = ldf c;
    base29 = ldf c in base;
    guard29 = `==`.4(sym29, base29);
    if guard29 then L415() else L416();
  L305():
    dr38 = tryDispatchBuiltin.0("[<-", l20, r192);
    dc19 = getTryDispatchBuiltinDispatched(dr38);
    if dc19 then L307() else L306(i25, r192, dr38);
  L306(i27, r194, l22):
    tt4 = ld tt;
    check L308() else D112();
  L346():
    aod1 = force? aod;
    checkMissing(aod1);
    c53 = `is.object`(aod1);
    if c53 then L348() else L349(aod1);
  L389():
    test6 = force? test5;
    checkMissing(test6);
    r274 = `==`(test6, "F");
    c62 = `as.logical`(r274);
    if c62 then L390() else L69();
  L405():
    deparse = ldf deparse;
    check L407() else D156();
  L406():
    r296 = dyn base28("Single term additions", "\nModel:", <lang deparse(formula(object))>, <lang if(`>`(scale, 0.0), paste("\nscale: ", format(scale), "\n"))>);
    goto L72(r296);
  D112():
    deopt 412 [i27, r194, l22, r192, tt4];
  D156():
    deopt 607 [];
  L69():
    goto L68();
  L75(r310):
    l42 = ld aod;
    class__3 = ldf `class<-`;
    check L418() else D163();
  L307():
    dx50 = getTryDispatchBuiltinValue(dr38);
    goto L49(i25, dx50);
  L308():
    tt5 = force? tt4;
    ___4 = ldf `[<-` in base;
    r197 = dyn ___4(l22, r192, tt5);
    goto L49(i27, r197);
  L347(dx65):
    st dev = dx65;
    scale7 = ld scale;
    check L351() else D136();
  L348():
    dr48 = tryDispatchBuiltin.1("$", aod1);
    dc24 = getTryDispatchBuiltinDispatched(dr48);
    if dc24 then L350() else L349(dr48);
  L349(aod3):
    r242 = `$`(aod3, <sym `Sum of Sq`>);
    goto L347(r242);
  L390():
    object47 = ld object;
    check L391() else D152();
  L407():
    p62 = prom<V +>{
      formula = ldf formula;
      p61 = prom<V +>{
        object51 = ld object;
        object52 = force? object51;
        checkMissing(object52);
        return object52;
      };
      r299 = dyn formula(p61);
      return r299;
    };
    r301 = dyn deparse(p62);
    check L408() else D157();
  L415():
    c70 = ldf c in base;
    r311 = dyn c70("anova", "data.frame");
    check L417() else D162();
  L416():
    r309 = dyn base29("anova", "data.frame");
    goto L75(r309);
  D136():
    deopt 510 [scale7];
  D152():
    deopt 579 [object47];
  D157():
    deopt 609 [r301];
  D162():
    deopt 630 [r311];
  D163():
    deopt 632 [r310, l42, r310];
  L350():
    dx64 = getTryDispatchBuiltinValue(dr48);
    goto L347(dx64);
  L351():
    scale8 = force? scale7;
    checkMissing(scale8);
    r243 = `==`(scale8, 0.0);
    c54 = `as.logical`(r243);
    if c54 then L352() else L60();
  L391():
    object48 = force? object47;
    checkMissing(object48);
    c63 = `is.object`(object48);
    if c63 then L393() else L394(object48);
  L408():
    scale11 = ld scale;
    check L409() else D158();
  L417():
    goto L75(r311);
  L418():
    r312 = dyn class__3(l42, NULL, r310);
    check L419() else D164();
  D158():
    deopt 610 [scale11];
  D164():
    deopt 634 [r310, r312];
  L60():
    dev6 = ld dev;
    check L367() else D142();
  L64():
    aod4 = ld aod;
    check L369() else D144();
  L352():
    n9 = ld n;
    check L353() else D137();
  L392(dx81):
    st rdf = dx81;
    Fstat = ldf Fstat;
    check L396() else D153();
  L393():
    dr64 = tryDispatchBuiltin.1("$", object48);
    dc32 = getTryDispatchBuiltinDispatched(dr64);
    if dc32 then L395() else L394(dr64);
  L394(object50):
    r275 = `$`(object50, <sym df.residual>);
    goto L392(r275);
  L409():
    scale12 = force? scale11;
    checkMissing(scale12);
    r302 = `>`(scale12, 0.0);
    c68 = `as.logical`(r302);
    if c68 then L410() else L73();
  L419():
    st aod = r312;
    head = ld head;
    check L420() else D165();
  D137():
    deopt 514 [n9];
  D142():
    deopt 538 [dev6];
  D144():
    deopt 543 [aod4];
  D153():
    deopt 584 [];
  D165():
    deopt 636 [head];
  L73():
    goto L74(NULL);
  L74(r307):
    c69 = ldf c in base;
    r308 = dyn c69("Single term additions", "\nModel:", r301, r307);
    check L414() else D161();
  L353():
    n10 = force? n9;
    checkMissing(n10);
    sym25 = ldf log;
    base25 = ldf log in base;
    guard25 = `==`.4(sym25, base25);
    if guard25 then L354() else L355();
  L367():
    dev7 = force? dev6;
    checkMissing(dev7);
    scale9 = ld scale;
    check L368() else D143();
  L369():
    aod5 = force? aod4;
    checkMissing(aod5);
    c57 = `is.object`(aod5);
    if c57 then L371() else L372(aod5);
  L395():
    dx80 = getTryDispatchBuiltinValue(dr64);
    goto L392(dx80);
  L396():
    p58 = prom<V +>{
      aod8 = ld aod;
      aod9 = force? aod8;
      checkMissing(aod9);
      return aod9;
    };
    p59 = prom<V +>{
      aod10 = ld aod;
      aod11 = force? aod10;
      checkMissing(aod11);
      c64 = `is.object`(aod11);
      if c64 then L2() else L3(aod11);
    L1(dx83):
      c65 = `is.object`(dx83);
      if c65 then L5() else L6(dx83);
    L2():
      dr66 = tryDispatchBuiltin.1("$", aod11);
      dc33 = getTryDispatchBuiltinDispatched(dr66);
      if dc33 then L4() else L3(dr66);
    L3(aod13):
      r277 = `$`(aod13, <sym RSS>);
      goto L1(r277);
    L0(dx87):
      return dx87;
    L4():
      dx82 = getTryDispatchBuiltinValue(dr66);
      goto L1(dx82);
    L5():
      dr68 = tryDispatchBuiltin.1("[", dx83);
      dc34 = getTryDispatchBuiltinDispatched(dr68);
      if dc34 then L7() else L6(dr68);
    L6(dx85):
      __9 = ldf `[` in base;
      r278 = dyn __9(dx85, 1);
      goto L0(r278);
    L7():
      dx86 = getTryDispatchBuiltinValue(dr68);
      goto L0(dx86);
    };
    p60 = prom<V +>{
      rdf = ld rdf;
      rdf1 = force? rdf;
      checkMissing(rdf1);
      return rdf1;
    };
    r281 = dyn Fstat(p58, p59, p60);
    check L397() else D154();
  L410():
    paste3 = ldf paste;
    check L411() else D159();
  L420():
    head1 = force? head;
    checkMissing(head1);
    l43 = ld aod;
    attr__ = ldf `attr<-`;
    check L421() else D166();
  D143():
    deopt 539 [dev7, scale9];
  D154():
    deopt 588 [r281];
  D159():
    deopt 615 [];
  D161():
    deopt 623 [r308];
  D166():
    deopt 639 [head1, l43, head1];
  L61(n13, r245):
    r248 = `*`(n13, r245);
    st dev = r248;
    dev = ld dev;
    check L358() else D140();
  L354():
    RSS14 = ld RSS;
    check L356() else D138();
  L355():
    r244 = dyn base25(<lang `/`(RSS, n)>);
    goto L61(n10, r244);
  L368():
    scale10 = force? scale9;
    checkMissing(scale10);
    r257 = `/`(dev7, scale10);
    st dev = r257;
    goto L64();
  L370(dx71):
    st df = dx71;
    sym26 = ldf `is.na`;
    base26 = ldf `is.na` in base;
    guard26 = `==`.4(sym26, base26);
    if guard26 then L374() else L375();
  L371():
    dr54 = tryDispatchBuiltin.1("$", aod5);
    dc27 = getTryDispatchBuiltinDispatched(dr54);
    if dc27 then L373() else L372(dr54);
  L372(aod7):
    r258 = `$`(aod7, <sym Df>);
    goto L370(r258);
  L397():
    l36 = ld aod;
    c66 = `is.object`(l36);
    if c66 then L398() else L399(r281, l36);
  L411():
    p64 = prom<V +>{
      format = ldf format;
      p63 = prom<V +>{
        scale13 = ld scale;
        scale14 = force? scale13;
        checkMissing(scale14);
        return scale14;
      };
      r304 = dyn format(p63);
      return r304;
    };
    r306 = dyn paste3("\nscale: ", p64, "\n");
    check L412() else D160();
  L414():
    goto L72(r308);
  L421():
    r313 = dyn attr__(l43, NULL, "heading", head1);
    check L422() else D167();
  D138():
    deopt 516 [n10, RSS14];
  D140():
    deopt 523 [dev];
  D160():
    deopt 619 [r306];
  D167():
    deopt 642 [head1, r313];
  L65(r260):
    r262 = `!`(r260);
    st nas = r262;
    safe_pchisq = ldf safe_pchisq;
    check L378() else D147();
  L70(r285, dx89):
    st aod = dx89;
    goto L68();
  L356():
    RSS15 = force? RSS14;
    checkMissing(RSS15);
    n14 = ld n;
    check L357() else D139();
  L358():
    dev1 = force? dev;
    checkMissing(dev1);
    c55 = `is.object`(dev1);
    if c55 then L359() else L360(dev1);
  L373():
    dx70 = getTryDispatchBuiltinValue(dr54);
    goto L370(dx70);
  L374():
    df = ld df;
    check L376() else D145();
  L375():
    r259 = dyn base26(<sym df>);
    goto L65(r259);
  L398():
    dr70 = tryDispatchBuiltin.0("[<-", l36, r281);
    dc35 = getTryDispatchBuiltinDispatched(dr70);
    if dc35 then L400() else L399(r281, dr70);
  L399(r283, l38):
    sym27 = ldf c;
    base27 = ldf c in base;
    guard27 = `==`.4(sym27, base27);
    if guard27 then L401() else L402();
  L412():
    goto L74(r306);
  L422():
    st aod = r313;
    aod14 = ld aod;
    check L423() else D168();
  D139():
    deopt 517 [n10, RSS15, n14];
  D145():
    deopt 549 [df];
  D147():
    deopt 556 [];
  D168():
    deopt 644 [aod14];
  L62(dx67):
    dev4 = ld dev;
    check L362() else D141();
  L71(r291, r292, r293):
    ___9 = ldf `[<-` in base;
    r295 = dyn ___9(l36, <missing>, r293, r292);
    goto L70(r291, r295);
  L357():
    n15 = force? n14;
    checkMissing(n15);
    r246 = `/`(RSS15, n15);
    r247 = log(r246, 2.718281828459045);
    goto L61(n10, r247);
  L359():
    dr50 = tryDispatchBuiltin.1("[", dev1);
    dc25 = getTryDispatchBuiltinDispatched(dr50);
    if dc25 then L361() else L360(dr50);
  L360(dev3):
    __6 = ldf `[` in base;
    r249 = dyn __6(dev3, 1);
    goto L62(r249);
  L376():
    df1 = force? df;
    checkMissing(df1);
    is_na = ldf `is.na` in base;
    r261 = dyn is_na(df1);
    check L377() else D146();
  L378():
    p56 = prom<V +>{
      dev8 = ld dev;
      dev9 = force? dev8;
      checkMissing(dev9);
      c58 = `is.object`(dev9);
      if c58 then L1() else L2(dev9);
    L0(dx73):
      return dx73;
    L1():
      dr56 = tryDispatchBuiltin.1("[", dev9);
      dc28 = getTryDispatchBuiltinDispatched(dr56);
      if dc28 then L3() else L2(dr56);
    L2(dev11):
      nas = ld nas;
      nas1 = force? nas;
      __7 = ldf `[` in base;
      r263 = dyn __7(dev11, nas1);
      goto L0(r263);
    L3():
      dx72 = getTryDispatchBuiltinValue(dr56);
      goto L0(dx72);
    };
    p57 = prom<V +>{
      df2 = ld df;
      df3 = force? df2;
      checkMissing(df3);
      c59 = `is.object`(df3);
      if c59 then L1() else L2(df3);
    L0(dx75):
      return dx75;
    L1():
      dr58 = tryDispatchBuiltin.1("[", df3);
      dc29 = getTryDispatchBuiltinDispatched(dr58);
      if dc29 then L3() else L2(dr58);
    L2(df5):
      nas2 = ld nas;
      nas3 = force? nas2;
      __8 = ldf `[` in base;
      r265 = dyn __8(df5, nas3);
      goto L0(r265);
    L3():
      dx74 = getTryDispatchBuiltinValue(dr58);
      goto L0(dx74);
    };
    r267 = dyn safe_pchisq[, , `lower.tail`](p56, p57, FALSE);
    check L379() else D148();
  L400():
    dx88 = getTryDispatchBuiltinValue(dr70);
    goto L70(r281, dx88);
  L401():
    c67 = ldf c in base;
    r294 = dyn c67("F value", "Pr(>F)");
    check L403() else D155();
  L402():
    r290 = dyn base27("F value", "Pr(>F)");
    goto L71(r283, r281, r290);
  L423():
    aod15 = force? aod14;
    checkMissing(aod15);
    popenv;
    return aod15;
  D141():
    deopt 527 [dx67, dev4];
  D146():
    deopt 552 [r261];
  D148():
    deopt 561 [r267];
  D155():
    deopt 596 [r283, l38, r281, r294];
  L361():
    dx66 = getTryDispatchBuiltinValue(dr50);
    goto L62(dx66);
  L362():
    dev5 = force? dev4;
    checkMissing(dev5);
    r250 = `-`(dx67, dev5);
    st dev = r250;
    l27 = ld dev;
    c56 = `is.object`(l27);
    if c56 then L363() else L364(NA_LGL, l27);
  L377():
    goto L65(r261);
  L379():
    l30 = ld dev;
    c60 = `is.object`(l30);
    if c60 then L380() else L381(r267, l30);
  L403():
    goto L71(r283, r281, r294);
  L63(r254, dx69):
    st dev = dx69;
    goto L64();
  L66(dx77):
    st dev = dx77;
    dev12 = ld dev;
    check L384() else D150();
  L363():
    dr52 = tryDispatchBuiltin.0("[<-", l27, NA_LGL);
    dc26 = getTryDispatchBuiltinDispatched(dr52);
    if dc26 then L365() else L364(NA_LGL, dr52);
  L364(r252, l29):
    ___6 = ldf `[<-` in base;
    r255 = dyn ___6(l29, NA_LGL, 1);
    goto L63(r252, r255);
  L380():
    dr60 = tryDispatchBuiltin.0("[<-", l30, r267);
    dc30 = getTryDispatchBuiltinDispatched(dr60);
    if dc30 then L382() else L381(r267, dr60);
  L381(r269, l32):
    nas4 = ld nas;
    check L383() else D149();
  D149():
    deopt 563 [r269, l32, r267, nas4];
  D150():
    deopt 567 [dev12];
  L365():
    dx68 = getTryDispatchBuiltinValue(dr52);
    goto L63(NA_LGL, dx68);
  L382():
    dx76 = getTryDispatchBuiltinValue(dr60);
    goto L66(dx76);
  L383():
    nas5 = force? nas4;
    ___7 = ldf `[<-` in base;
    r272 = dyn ___7(l32, r267, nas5);
    goto L66(r272);
  L384():
    dev13 = force? dev12;
    checkMissing(dev13);
    l33 = ld aod;
    c61 = `is.object`(l33);
    if c61 then L385() else L386(dev13);
  L67(dev17, dx79):
    st aod = dx79;
    goto L68();
  L385():
    dr62 = tryDispatchBuiltin.0("[<-", l33, dev13);
    dc31 = getTryDispatchBuiltinDispatched(dr62);
    if dc31 then L387() else L386(dev13);
  L386(dev15):
    ___8 = ldf `[<-` in base;
    r273 = dyn ___8(l33, <missing>, "Pr(>Chi)", dev13);
    goto L67(dev15, r273);
  L387():
    dx78 = getTryDispatchBuiltinValue(dr62);
    goto L67(dev13, dx78);
  }
}
fun inner157652812(table, RSS, rdf) {
  (reg table:*, reg RSS:*, reg rdf:*) -+> V { var table:*, var RSS:*, var rdf:*, reg table1:*, reg table2:V, reg c:L, reg table4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg table5:*, reg table6:V, reg c1:L, reg table8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg RSS1:*, reg RSS2:V, reg dev:*, reg dev1:V, reg r2:V, reg rdf1:*, reg rdf2:V, reg df:*, reg df1:V, reg r3:V, reg r4:V, reg dev2:*, reg dev3:V, reg df2:*, reg df3:V, reg r5:V, reg rms:*, reg rms1:V, reg r6:V, reg l:*, reg c2:L, reg r8:L, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg df4:*, reg df5:V, reg _Machine:*, reg _Machine1:V, reg c3:L, reg r13:L, reg l4:*, reg r14:L, reg df7:V, reg _Machine3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg r17:L, reg l6:*, reg r18:L, reg df9:V, reg dx7:V, reg r19:V, reg r20:V, reg ___:cls, reg r21:V, reg Fs:*, reg Fs1:V, reg sym:cls, reg base:cls, reg guard:L, reg r22:V, reg r23:V, reg Fs2:*, reg Fs3:V, reg is_na:cls, reg r24:V, reg r25:V, reg safe_pf:cls, reg Fs4:*, reg Fs5:V, reg c4:L, reg Fs7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg nnas:*, reg nnas1:V, reg __:cls, reg r26:V, reg p:p(V +), reg df10:*, reg df11:V, reg c5:L, reg df13:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg nnas2:*, reg nnas3:V, reg __1:cls, reg r28:V, reg p1:p(V +), reg rdf3:*, reg rdf4:V, reg df14:*, reg df15:V, reg c6:L, reg rdf6:V, reg df17:V, reg dr12:V, reg dc6:L, reg dx12:V, reg rdf8:V, reg dx13:V, reg nnas4:*, reg nnas5:V, reg __2:cls, reg r30:V, reg r31:V, reg p2:p(V +), reg r33:V, reg l7:*, reg c7:L, reg r35:V, reg l9:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg nnas6:*, reg nnas7:V, reg ___1:cls, reg r38:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r39:V, reg r40:V, reg Fs8:*, reg Fs9:V, reg P:*, reg P1:V, reg list:cls, reg r41:V |
    mkenv;
    st table = table;
    st RSS = RSS;
    st rdf = rdf;
    table1 = ld table;
    check L4() else D0();
  D0():
    deopt 0 [table1];
  L4():
    table2 = force? table1;
    checkMissing(table2);
    c = `is.object`(table2);
    if c then L6() else L7(table2);
  L5(dx1):
    st dev = dx1;
    table5 = ld table;
    check L9() else D1();
  L6():
    dr = tryDispatchBuiltin.1("$", table2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(table4):
    r = `$`(table4, <sym `Sum of Sq`>);
    goto L5(r);
  D1():
    deopt 4 [table5];
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L9():
    table6 = force? table5;
    checkMissing(table6);
    c1 = `is.object`(table6);
    if c1 then L11() else L12(table6);
  L10(dx3):
    st df = dx3;
    RSS1 = ld RSS;
    check L14() else D2();
  L11():
    dr2 = tryDispatchBuiltin.1("$", table6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L13() else L12(dr2);
  L12(table8):
    r1 = `$`(table8, <sym Df>);
    goto L10(r1);
  D2():
    deopt 8 [RSS1];
  L13():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L14():
    RSS2 = force? RSS1;
    checkMissing(RSS2);
    dev = ld dev;
    check L15() else D3();
  D3():
    deopt 9 [RSS2, dev];
  L15():
    dev1 = force? dev;
    checkMissing(dev1);
    r2 = `-`(RSS2, dev1);
    rdf1 = ld rdf;
    check L16() else D4();
  D4():
    deopt 11 [r2, rdf1];
  L16():
    rdf2 = force? rdf1;
    checkMissing(rdf2);
    df = ld df;
    check L17() else D5();
  D5():
    deopt 12 [r2, rdf2, df];
  L17():
    df1 = force? df;
    checkMissing(df1);
    r3 = `-`(rdf2, df1);
    r4 = `/`(r2, r3);
    st rms = r4;
    dev2 = ld dev;
    check L18() else D6();
  D6():
    deopt 17 [dev2];
  L18():
    dev3 = force? dev2;
    checkMissing(dev3);
    df2 = ld df;
    check L19() else D7();
  D7():
    deopt 18 [dev3, df2];
  L19():
    df3 = force? df2;
    checkMissing(df3);
    r5 = `/`(dev3, df3);
    rms = ld rms;
    check L20() else D8();
  D8():
    deopt 20 [r5, rms];
  L20():
    rms1 = force? rms;
    checkMissing(rms1);
    r6 = `/`(r5, rms1);
    st Fs = r6;
    l = ld Fs;
    c2 = `is.object`(l);
    if c2 then L21() else L22(NA_LGL, l);
  L0(dx5):
    st Fs = dx5;
    Fs = ld Fs;
    check L30() else D11();
  L21():
    dr4 = tryDispatchBuiltin.0("[<-", l, NA_LGL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L23() else L22(NA_LGL, dr4);
  L22(r8, l2):
    df4 = ld df;
    check L24() else D9();
  D9():
    deopt 27 [r8, l2, NA_LGL, df4];
  D11():
    deopt 34 [Fs];
  L23():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L0(dx4);
  L24():
    df5 = force? df4;
    checkMissing(df5);
    _Machine = ld `.Machine`;
    check L25() else D10();
  L30():
    Fs1 = force? Fs;
    checkMissing(Fs1);
    st P = Fs1;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  D10():
    deopt 28 [r8, l2, NA_LGL, df5, _Machine];
  L1(r23):
    r25 = `!`(r23);
    st nnas = r25;
    safe_pf = ldf safe_pf;
    check L35() else D14();
  L25():
    _Machine1 = force? _Machine;
    checkMissing(_Machine1);
    c3 = `is.object`(_Machine1);
    if c3 then L27() else L28(r8, l2, NA_LGL, df5, _Machine1);
  L31():
    Fs2 = ld Fs;
    check L33() else D12();
  L32():
    r22 = dyn base(<sym Fs>);
    goto L1(r22);
  D12():
    deopt 39 [Fs2];
  D14():
    deopt 46 [];
  L26(r17, l6, r18, df9, dx7):
    r20 = `<`(df9, dx7);
    ___ = ldf `[<-` in base;
    r21 = dyn ___(l6, r18, r20);
    goto L0(r21);
  L27():
    dr6 = tryDispatchBuiltin.1("$", _Machine1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L29() else L28(r8, l2, NA_LGL, df5, dr6);
  L28(r13, l4, r14, df7, _Machine3):
    r19 = `$`(_Machine3, <sym double.eps>);
    goto L26(r13, l4, r14, df7, r19);
  L33():
    Fs3 = force? Fs2;
    checkMissing(Fs3);
    is_na = ldf `is.na` in base;
    r24 = dyn is_na(Fs3);
    check L34() else D13();
  L35():
    p = prom<V +>{
      Fs4 = ld Fs;
      Fs5 = force? Fs4;
      checkMissing(Fs5);
      c4 = `is.object`(Fs5);
      if c4 then L1() else L2(Fs5);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", Fs5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(Fs7):
      nnas = ld nnas;
      nnas1 = force? nnas;
      __ = ldf `[` in base;
      r26 = dyn __(Fs7, nnas1);
      goto L0(r26);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p1 = prom<V +>{
      df10 = ld df;
      df11 = force? df10;
      checkMissing(df11);
      c5 = `is.object`(df11);
      if c5 then L1() else L2(df11);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", df11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(df13):
      nnas2 = ld nnas;
      nnas3 = force? nnas2;
      __1 = ldf `[` in base;
      r28 = dyn __1(df13, nnas3);
      goto L0(r28);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p2 = prom<V +>{
      rdf3 = ld rdf;
      rdf4 = force? rdf3;
      checkMissing(rdf4);
      df14 = ld df;
      df15 = force? df14;
      checkMissing(df15);
      c6 = `is.object`(df15);
      if c6 then L1() else L2(rdf4, df15);
    L0(rdf8, dx13):
      r31 = `-`(rdf8, dx13);
      return r31;
    L1():
      dr12 = tryDispatchBuiltin.1("[", df15);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(rdf4, dr12);
    L2(rdf6, df17):
      nnas4 = ld nnas;
      nnas5 = force? nnas4;
      __2 = ldf `[` in base;
      r30 = dyn __2(df17, nnas5);
      goto L0(rdf6, r30);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(rdf4, dx12);
    };
    r33 = dyn safe_pf[, , , `lower.tail`](p, p1, p2, FALSE);
    check L36() else D15();
  D13():
    deopt 42 [r24];
  D15():
    deopt 52 [r33];
  L29():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L26(r8, l2, NA_LGL, df5, dx6);
  L34():
    goto L1(r24);
  L36():
    l7 = ld P;
    c7 = `is.object`(l7);
    if c7 then L37() else L38(r33, l7);
  L2(dx15):
    st P = dx15;
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L41() else L42();
  L37():
    dr14 = tryDispatchBuiltin.0("[<-", l7, r33);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L39() else L38(r33, dr14);
  L38(r35, l9):
    nnas6 = ld nnas;
    check L40() else D16();
  D16():
    deopt 54 [r35, l9, r33, nnas6];
  L3(r40):
    popenv;
    return r40;
  L39():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L2(dx14);
  L40():
    nnas7 = force? nnas6;
    ___1 = ldf `[<-` in base;
    r38 = dyn ___1(l9, r33, nnas7);
    goto L2(r38);
  L41():
    Fs8 = ld Fs;
    check L43() else D17();
  L42():
    r39 = dyn base1[Fs, P](<sym Fs>, <sym P>);
    goto L3(r39);
  D17():
    deopt 60 [Fs8];
  L43():
    Fs9 = force? Fs8;
    checkMissing(Fs9);
    P = ld P;
    check L44() else D18();
  D18():
    deopt 63 [P];
  L44():
    P1 = force? P;
    checkMissing(P1);
    list = ldf list in base;
    r41 = dyn list(Fs9, P1);
    check L45() else D19();
  D19():
    deopt 67 [r41];
  L45():
    goto L3(r41);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste:cls, reg sort:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st x = x;
    paste = ldf paste;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      sort = ldf sort;
      p = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r1 = dyn sort(p);
      return r1;
    };
    r3 = dyn paste[, collapse](p1, ":");
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}