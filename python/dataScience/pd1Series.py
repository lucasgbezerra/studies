{
 "cells": [
  {
   "cell_type": "code",
   "execution_count": 1,
   "metadata": {},
   "outputs": [],
   "source": [
    "import numpy as np"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 2,
   "metadata": {},
   "outputs": [],
   "source": [
    "import pandas as pd"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 3,
   "metadata": {},
   "outputs": [],
   "source": [
    "labels = ['a','b','c']"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 7,
   "metadata": {},
   "outputs": [],
   "source": [
    "lista = [10,20,30]\n",
    "arr = np.array([10,20,30])\n",
    "d= {'a':10,'b':20,'c':30}"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "## pd.Series()\n",
    "- tem o funcionamento parecido com o dicionário. \n",
    "- varios parametros de entrada"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 16,
   "metadata": {},
   "outputs": [],
   "source": [
    "ser = pd.Series(lista,labels)"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "-  O inverso também é possivel, labels,lista"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 15,
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "a    10\n",
       "b    20\n",
       "c    30\n",
       "dtype: int64"
      ]
     },
     "execution_count": 15,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "ser"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "- Acesso identico ao dicionario"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 14,
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "20"
      ]
     },
     "execution_count": 14,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "ser['b']"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 17,
   "metadata": {},
   "outputs": [],
   "source": [
    "ser = pd.Series(arr,labels)"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 18,
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "a    10\n",
       "b    20\n",
       "c    30\n",
       "dtype: int64"
      ]
     },
     "execution_count": 18,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "ser"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "- **É possivel passar metódos como print, sum e len como parametro da pc.Series()**"
   ]
  },
  {
   "cell_type": "markdown",
   "metadata": {},
   "source": [
    "### pd.Series() permite fazer operações aritméticas baseadas no index"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 25,
   "metadata": {},
   "outputs": [],
   "source": [
    "ser1 = pd.Series([1,2,3,4],['EUA','Brasil','Alemanha','Espanha'])"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 26,
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "EUA         1\n",
       "Brasil      2\n",
       "Alemanha    3\n",
       "Espanha     4\n",
       "dtype: int64"
      ]
     },
     "execution_count": 26,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "ser1"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 21,
   "metadata": {},
   "outputs": [],
   "source": [
    "ser2 = pd.Series([1,2,3,4],['Brasil','Portugal','EUA','Espanha'])"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 27,
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "Brasil      1\n",
       "Portugal    2\n",
       "EUA         3\n",
       "Espanha     4\n",
       "dtype: int64"
      ]
     },
     "execution_count": 27,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "ser2"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": 28,
   "metadata": {},
   "outputs": [
    {
     "data": {
      "text/plain": [
       "Alemanha    NaN\n",
       "Brasil      3.0\n",
       "EUA         4.0\n",
       "Espanha     8.0\n",
       "Portugal    NaN\n",
       "dtype: float64"
      ]
     },
     "execution_count": 28,
     "metadata": {},
     "output_type": "execute_result"
    }
   ],
   "source": [
    "ser1 + ser2"
   ]
  },
  {
   "cell_type": "code",
   "execution_count": null,
   "metadata": {},
   "outputs": [],
   "source": []
  }
 ],
 "metadata": {
  "kernelspec": {
   "display_name": "Python 3",
   "language": "python",
   "name": "python3"
  },
  "language_info": {
   "codemirror_mode": {
    "name": "ipython",
    "version": 3
   },
   "file_extension": ".py",
   "mimetype": "text/x-python",
   "name": "python",
   "nbconvert_exporter": "python",
   "pygments_lexer": "ipython3",
   "version": "3.6.9"
  }
 },
 "nbformat": 4,
 "nbformat_minor": 4
}
