package com.pitest.app;

import static org.junit.Assert.assertEquals;

import org.junit.Test;

public class MathzTest {
    @Test
    public void shouldAddCorrectly() {
        var mathz = new Mathz();

        var expected = 10;
        var actual = mathz.add(8, 2);
        assertEquals(expected, actual);
    }
}
