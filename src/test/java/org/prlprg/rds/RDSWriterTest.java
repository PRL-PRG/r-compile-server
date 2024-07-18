package org.prlprg.rds;

import static java.lang.Double.NaN;
import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.fail;
import static org.prlprg.sexp.SEXPs.*;

import java.io.*;
import java.util.HashMap;
import java.util.List;
import org.junit.jupiter.api.Test;
import org.prlprg.AbstractGNURBasedTest;
import org.prlprg.bc.BCCompiler;
import org.prlprg.primitive.Complex;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.*;

public class RDSWriterTest extends AbstractGNURBasedTest {
  @Test
  public void testInts() throws Exception {
    var ints = integer(5, 4, 3, 2, 1);
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, ints);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof IntSXP read_ints) {
      assertEquals(5, read_ints.size());
      assertEquals(5, read_ints.get(0));
      assertEquals(4, read_ints.get(1));
      assertEquals(3, read_ints.get(2));
      assertEquals(2, read_ints.get(3));
      assertEquals(1, read_ints.get(4));
    } else {
      fail("Expected IntSXP");
    }
  }

  @Test
  public void testInts_withR() throws Exception {
    var ints = integer(5, 4, 3, 2, 1);
    var output =
        R.eval("typeof(input) == 'integer' && identical(input, c(5L, 4L, 3L, 2L, 1L))", ints);

    if (output instanceof LglSXP read_lgls) {
      assertEquals(1, read_lgls.size());
      assertEquals(Logical.TRUE, read_lgls.get(0));
    } else {
      fail("Expected LglSXP");
    }
  }

  @Test
  public void testComplex() throws Exception {
    var complexes = complex(new Complex(0, 0), new Complex(1, 2), new Complex(-2, -1));
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, complexes);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof ComplexSXP read_complexes) {
      assertEquals(3, read_complexes.size());
      assertEquals(new Complex(0, 0), read_complexes.get(0));
      assertEquals(new Complex(1, 2), read_complexes.get(1));
      assertEquals(new Complex(-2, -1), read_complexes.get(2));
    }
  }

  @Test
  public void testComplex_withR() throws Exception {
    var complexes = complex(new Complex(0, 0), new Complex(1, 2), new Complex(-2, -1));
    var output =
        R.eval("typeof(input) == 'complex' && identical(input, c(0+0i, 1+2i, -2-1i))", complexes);

    if (output instanceof LglSXP read_lgls) {
      assertEquals(1, read_lgls.size());
      assertEquals(Logical.TRUE, read_lgls.get(0));
    } else {
      fail("Expected LglSXP");
    }
  }

  @Test
  public void testLang() throws Exception {
    var lang =
        lang(
            symbol("func"),
            list(List.of(new TaggedElem("arg", integer(1)), new TaggedElem(integer(2)))));
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, lang);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof LangSXP read_lang) {
      var name = read_lang.funName();
      var arg1 = read_lang.args().get(0);
      var arg2 = read_lang.args().get(1);

      assert name.isPresent();

      assertEquals(name.get(), "func");
      assertEquals(arg1, new TaggedElem("arg", integer(1)));
      assertEquals(arg2, new TaggedElem(integer(2)));
    }
  }

  @Test
  public void testVecAttributes() throws Exception {
    var attrs =
        new Attributes.Builder().put("a", integer(1)).put("b", logical(Logical.TRUE)).build();
    var ints = integer(1, attrs);

    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, ints);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof IntSXP read_ints) {
      assertEquals(1, read_ints.size());
      assertEquals(1, read_ints.get(0));
      assertEquals(attrs, read_ints.attributes());
    } else {
      fail("Expected IntSXP");
    }
  }

  @Test
  public void testLgls() throws Exception {
    var lgls = logical(Logical.TRUE, Logical.FALSE, Logical.NA);
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, lgls);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof LglSXP read_lgls) {
      assertEquals(3, read_lgls.size());
      assertEquals(Logical.TRUE, read_lgls.get(0));
      assertEquals(Logical.FALSE, read_lgls.get(1));
      assertEquals(Logical.NA, read_lgls.get(2));
    } else {
      fail("Expected LglSXP");
    }
  }

  @Test
  public void testReals() throws Exception {
    var reals = real(5.2, 4.0, Constants.NA_REAL, 2.0, NaN, 1.0);
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, reals);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof RealSXP read_reals) {
      assertEquals(6, read_reals.size());
      assertEquals(5.2, read_reals.get(0));
      assertEquals(4.0, read_reals.get(1));
      assertEquals(Constants.NA_REAL, read_reals.get(2));
      assertEquals(2.0, read_reals.get(3));
      assertEquals(NaN, read_reals.get(4));
      assertEquals(1.0, read_reals.get(5));
    } else {
      fail("Expected RealSXP");
    }
  }

  @Test
  public void testNull() throws Exception {
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, NULL);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    assertEquals(NULL, sexp);
  }

  @Test
  public void testVec() throws Exception {
    var vec = vec(integer(1, 2, 3), logical(Logical.TRUE, Logical.FALSE, Logical.NA));
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, vec);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof VecSXP read_vec) {
      assertEquals(2, read_vec.size());
      if (read_vec.get(0) instanceof IntSXP read_ints) {
        assertEquals(3, read_ints.size());
        assertEquals(1, read_ints.get(0));
        assertEquals(2, read_ints.get(1));
        assertEquals(3, read_ints.get(2));
      } else {
        fail("Expected IntSXP for the 1st element of the VecSXP");
      }
      if (read_vec.get(1) instanceof LglSXP read_lgls) {
        assertEquals(3, read_lgls.size());
        assertEquals(Logical.TRUE, read_lgls.get(0));
        assertEquals(Logical.FALSE, read_lgls.get(1));
        assertEquals(Logical.NA, read_lgls.get(2));
      } else {
        fail("Expected LglSXP for the 2nd element of the VecSXP");
      }
    } else {
      fail("Expected VecSXP");
    }
  }

  @Test
  public void testList() throws Exception {
    var elems =
        new TaggedElem[] {
          new TaggedElem("a", integer(1)),
          new TaggedElem("b", logical(Logical.TRUE)),
          new TaggedElem("c", real(3.14, 2.71))
        };
    var list = list(elems, Attributes.NONE);
    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, list);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof ListSXP l) {
      assertEquals(3, l.size());
      assertEquals("a", l.get(0).tag());
      if (l.get(0).value() instanceof IntSXP i) {
        assertEquals(1, i.get(0));
      } else {
        fail("Expected IntSXP for the 1st element of the ListSXP");
      }
      assertEquals("b", l.get(1).tag());
      if (l.get(1).value() instanceof LglSXP lgl) {
        assertEquals(Logical.TRUE, lgl.get(0));
      } else {
        fail("Expected LglSXP for the 2nd element of the ListSXP");
      }
      assertEquals("c", l.get(2).tag());
      if (l.get(2).value() instanceof RealSXP r) {
        assertEquals(3.14, r.get(0));
        assertEquals(2.71, r.get(1));
      } else {
        fail("Expected RealSXP for the 3rd element of the ListSXP");
      }
    } else {
      fail("Expected ListSXP");
    }
  }

  @Test
  public void testEnv() throws Exception {
    var env = new UserEnvSXP();
    env.set("a", integer(1));
    env.set("b", logical(Logical.TRUE));
    env.set("c", real(3.14, 2.71));
    env.set("d", string("foo", "bar"));
    env.setAttributes(new Attributes.Builder().put("test", logical(Logical.TRUE)).build());

    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, env);

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    if (sexp instanceof UserEnvSXP read_env) {
      assertEquals(4, read_env.size());
      assertEquals(integer(1), read_env.get("a").orElseThrow());
      assertEquals(logical(Logical.TRUE), read_env.get("b").orElseThrow());
      assertEquals(real(3.14, 2.71), read_env.get("c").orElseThrow());
      assertEquals(string("foo", "bar"), read_env.get("d").orElseThrow());
      assertEquals(
          new Attributes.Builder().put("test", logical(Logical.TRUE)).build(),
          read_env.attributes());
    } else {
      fail("Expected UserEnvSXP");
    }
  }

  @Test
  public void testEnv_withR() throws Exception {
    var env = new UserEnvSXP();
    env.set("a", integer(1));
    env.set("b", logical(Logical.TRUE));
    env.set("c", real(3.14, 2.71));
    env.set("d", string("foo", "bar"));

    var output = R.eval("typeof(input) == 'environment'", env);

    if (output instanceof LglSXP read_lgls) {
      assertEquals(1, read_lgls.size());
      assertEquals(Logical.TRUE, read_lgls.get(0));
    } else {
      fail("Expected LglSXP");
    }
  }

  @Test
  public void testClosureEval() throws Exception {
    // function(x, y=1) length(x) + x + y
    // test by loading the closure into R and evaluating
    var clo =
        closure(
                list(List.of(new TaggedElem("x", MISSING_ARG), new TaggedElem("y", real(3)))),
                lang(
                    symbol("+"),
                    list(
                        lang(
                            symbol("+"),
                            list(lang(symbol("length"), list(symbol("x"))), symbol("x"))),
                        symbol("y"))),
                new BaseEnvSXP(new HashMap<>()))
            .withAttributes(new Attributes.Builder().put("a", integer(1)).build());
    ;

    var output = R.eval("input(x=c(1, 2))", clo);

    assertEquals(output, real(6, 7));
  }

  @Test
  public void testClosureWithBC() throws Exception {
    // Same closure as `testClosure`, just compiled to bytecode
    // Test by serializing and deserializing
    var clo =
        closure(
            list(List.of(new TaggedElem("x", MISSING_ARG), new TaggedElem("y", real(3)))),
            lang(
                symbol("+"),
                list(
                    lang(symbol("+"), list(lang(symbol("length"), list(symbol("x"))), symbol("x"))),
                    symbol("y"))),
            new BaseEnvSXP(new HashMap<>()));
    var bc = new BCCompiler(clo, rsession).compile().orElseThrow();

    var output = new ByteArrayOutputStream();

    RDSWriter.writeStream(output, bcode(bc));

    var input = new ByteArrayInputStream(output.toByteArray());
    var sexp = RDSReader.readStream(rsession, input);

    assertEquals(sexp, bcode(bc));
  }

  @Test
  public void testClosureWithBCEval() {
    // Same closure as `testClosure`, just compiled to bytecode
    // Test by loading into R and evaluating
    var clo =
        closure(
            list(List.of(new TaggedElem("x", MISSING_ARG), new TaggedElem("y", real(3)))),
            lang(
                symbol("+"),
                list(
                    lang(symbol("+"), list(lang(symbol("length"), list(symbol("x"))), symbol("x"))),
                    symbol("y"))),
            new BaseEnvSXP(new HashMap<>()));
    var bc = new Compiler(clo, rsession).compile().orElseThrow();
    var compiled_clo = closure(clo.parameters(), bcode(bc), clo.env());

    var output = R.eval("input(x=c(1, 2))", compiled_clo);

    assertEquals(output, real(6, 7));
  }
}
